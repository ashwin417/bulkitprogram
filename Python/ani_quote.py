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
    res = requests.get("https://animechan.vercel.app/api/random")
    quote_dict = res.json()
    print(f"{bcolors.HEADER}{quote_dict['quote']}{bcolors.ENDC}")
    print(f"\t ~ {bcolors.OKGREEN}{quote_dict['character']}{bcolors.ENDC} \n\t   Anime : {bcolors.OKCYAN}{quote_dict['anime']}{bcolors.ENDC}")

if __name__ == '__main__':
    run()