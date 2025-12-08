"""Based on https://stackoverflow.com/a/38866913/23325241"""

import re

# Attempt to import requests and handle if it's missing
try:
    import requests
    requests_available = True
except ImportError:
    requests_available = False

def create_download_url():
    # Ask the user for the Marketplace URL
    marketplace_url = input("Enter the VSCode Extention Marketplace URL: ").strip()
    version = input("Enter the version (leave empty for 'latest'): ").strip() or "latest"

    # Extract publisher and extension name using regex
    match = re.search(r"itemName=([^.]+)\.(.+)", marketplace_url)
    if not match:
        print("Invalid VSCode Marketplace URL format.")
        return

    publisher, extension_name = match.groups()

    # Generate the download URL
    download_url = (
        f"https://{publisher}.gallery.vsassets.io/_apis/public/gallery/publisher/"
        f"{publisher}/extension/{extension_name}/{version}/"
        "assetbyname/Microsoft.VisualStudio.Services.VSIXPackage"
    )

    print("\nDownload URL:")
    print(download_url)

    if not requests_available:
        print("The 'requests' library is not installed. Skipping download functionality.")
        return

    # Ask the user if they want to download the file
    download = input("Do you want to download the VSIX file? (yes/no): ").strip().lower()
    if download == 'yes':
        response = requests.get(download_url, stream=True)
        if response.status_code == 200:
            file_name = f"{extension_name}.vsix"
            with open(file_name, "wb") as file:
                for chunk in response.iter_content(chunk_size=8192):
                    file.write(chunk)
            print(f"File downloaded successfully as '{file_name}'")
        else:
            print(f"Failed to download the file. HTTP Status Code: {response.status_code}")
    else:
        print("Download skipped.")

if __name__ == "__main__":
    create_download_url()