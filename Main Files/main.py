from ast import Break
from requests import status_codes, get
from time import ctime, sleep
from getpass import getuser
from os import system, environ
import platform


username = getuser()
machine = environ['COMPUTERNAME']
horas = ctime().split()
my_os = ""
my_url = ""


if platform.system() == "Windows":
    my_os = f"cls"
elif platform.system() == "Linux":
    my_os = "clear"
elif platform.system() == "Darwin":
    my_os = "clear"
    system("clear")
    print("SISTEMA NÃO SUPORTADO PELO APLICATIVO!!")
    Break()



print("Digite o Link: ")

link = str(input(f"\n\033[1;31;44m{username}@{machine}\033[1;0;97m:~/\033[1;36m(Root)\033[1;97m $> \033[m "))


num_int = int(link.find("dest=")) + 5
link_int = int(len(link))

only_skip = link[num_int:link_int]
only_skip.replace("%2F", "/")
url_cl = only_skip.replace("%3A", ":").replace("%2F","/")

def init_site(linque):
    if platform.system() == "Windows":
        my_url = f"start {linque}"
    elif platform.system() == "Linux":
        my_url = f'wget "{linque}" '

    

if get(url_cl).status_code == 200:
    print("O servidor está disponível.")
    sleep(0.5)
    print("Iniciando Download!")
    barra = "\\"
    system(my_os)
    print("\033[1;34mBaixando . /\033[m")
    sleep(0.3)
    system(my_os)
    print("\033[1;34mBaixando .. -\033[m")
    sleep(0.3)
    system(my_os)
    print(f"\033[1;34mBaixando ...  {barra}\033[m")
    sleep(0.3)

    system(my_os)
    sleep(0.3)
    print("\033[1;34mBaixando . /\033[m")
    sleep(0.3)
    system(my_os)
    print("\033[1;34mBaixando .. -\033[m")
    sleep(0.3)
    system(my_os)
    print(f"\033[1;34mBaixando ... {barra}\033[m")

    sleep(0.5)
    system(my_os)
    print("Arquivo baixado com sucesso!!")
    sleep(0.5)
    system(my_os)

    init_site(url_cl)
    
else:
    print("O servidor está indisponível.")
    print("\nO arquivo foi deletado do site!!")
