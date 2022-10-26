import requests

url = 'https://0x0.st/'

fname = input("Enter the file name (with path) : ")
try :
    with open(fname, 'rb') as f:
        res = requests.post(url, files={'file': f})
        print("Your file has been uploaded at : ")
        print(res.text)
except:
    print("File does not exist!")