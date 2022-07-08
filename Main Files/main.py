
from requests import status_codes, get
from webbrowser import open
from time import ctime, sleep
from getpass import getuser
from os import system, environ
import platform

#set globals variables
username = getuser()
machine = environ['COMPUTERNAME']
horas = ctime().split()
my_os = ''
my_url = ''

#recognise os
if platform.system() == 'Windows':
    my_os = f'cls'
elif platform.system() == 'Linux':
    my_os = 'clear'
elif platform.system() == 'Darwin':
    my_os = 'clear'
    system('clear')
    print('SISTEMA NÃO SUPORTADO PELO APLICATIVO!!')
    exit
print('Digite o Link: ')
link = str(input(f'[1;31;44m{username}@{machine}[1;0;97m:~/[1;36m(Root)[1;97m $> [m '))
num_int = int(link.find('dest=')) + 5
link_int = int(len(link))
only_skip = link[num_int:link_int]
only_skip.replace('%2F', '/')
url_cl = only_skip.replace('%3A', ':').replace('%2F','/')
resposta = get(str(url_cl))

#open browser
if resposta.status_code == 200:
    print('O servidor esta disponivel.')
    sleep(0.5)
    print('Iniciando Download!')
    barra = '\\'
    system(my_os)
    print('O servidor esta disponivel.')
    print('[1;34mBaixando . /[m')
    sleep(0.3)
    system(my_os)
    print('O servidor esta disponivel.')
    print('[1;34mBaixando .. -[m')
    sleep(0.3)
    system(my_os)
    print('O servidor esta disponivel.')
    print(f'[1;34mBaixando ...  {barra}[m')
    sleep(0.3)
    system(my_os)
    print('O servidor esta disponivel.')
    sleep(0.3)
    print('[1;34mBaixando . /[m')
    sleep(0.3)
    system(my_os)
    print('O servidor esta disponivel.')
    print('[1;34mBaixando .. -[m')
    sleep(0.3)
    system(my_os)
    print('O servidor esta disponivel.')
    print(f'[1;34mBaixando ... {barra}[m')
    sleep(0.5)
    system(my_os)
    print('O servidor esta disponivel.')
    print('Arquivo baixado com sucesso!!')
    sleep(0.5)
    system(my_os)
    print(url_cl)
    if platform.system() == 'Windows':
        open(url_cl)
        #system(f"start {url_cl}")
    elif platform.system() == 'Linux':
        open(url_cl)
    print(resposta.status_code)
    
else:
    print('O servidor está indisponivel.')
    print('',end='')


