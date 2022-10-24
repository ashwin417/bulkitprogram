import requests

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

def run():
    url = 'https://poetrydb.org/random'
    res = requests.get(url)
    poem = res.json()
    title = poem[0]['title']
    author = poem[0]['author']
    lines = poem[0]['lines']
    print(f"\n{bcolors.OKGREEN}{title}{bcolors.ENDC}\n\n")
    for i in lines:
        print(f"{bcolors.HEADER}{i}{bcolors.ENDC}")
    print(f"\n\n\t ~ {bcolors.OKCYAN}{author}{bcolors.ENDC}")

if __name__ == '__main__':
    run()