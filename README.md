<h1 align="center">
    Lib Matemática
</h1>
<p align="center">🚀 Um projeto de biblioteca de funções matemáticas em C.</p>

### 🛠 Features

As seguintes ferramentas foram usadas na construção do projeto:

- [C]([https://www.devmedia.com.br/o-que-e-o-html5/25820](https://awari.com.br/o-que-e-linguagem-c/))
- [MinGW]([https://developer.mozilla.org/pt-BR/docs/Web/CSS](https://www.mingw-w64.org))

### ✅ Requirements

Antes de começar, você vai precisar ter instalado em sua máquina a seguinte ferramenta:<br />
- [Git](https://git-scm.com)<br />

É necessário também possuir o terminal Ubuntu no Windows, deixo abaixo um link com o tutorial para a instalação e configuração do mesmo.<br />
- [Git](https://www.hostgator.com.br/blog/como-ter-um-terminal-linux-no-windows-10/)<br />

Além disto é bom ter um editor de texto para manipular o código, te indico um que eu gosto bastante:<br />
- [VSCode](https://code.visualstudio.com/)

### Getting Started 

Importante ressaltar que o projeto ele consiste na geração de um executável, que eu já disponibilizei aqui. Portanto para rodar bastar executar o arquivo "programa_principal.exe", clicando 2 vezes em cima dele ou via termional dentro do diretorio do projeto digitar o nome do arquivo "programa_principal.exe". Porém vou detalhar o que é necessário para recriar o projeto do zero.

- Agora abra o cmd do windows (tecla windows + r, digite cmd e clique "ok") vá no diretório de sua preferência e clone esse repositório: 
```shell script
git clone "https://github.com/julianoferrrone12/lib_matematica.git"
```
- Mova-se para o diretório apropriado: 
```shell script
cd lib_matematica
```
- Se quiser, agora basta executar o arquivo dentro do diretório, caso queira seguir com o tutorial siga os passos abaixo.

- Digite "code ." para abrir esse projeto no Visual Studio Code

- Abra o terminal do linux no seu computador e digite:
```shell script
sudo apt-get update
```

- Depois disso, digite:
```shell script
sudo apt install gcc
```

- Feito isso está tudo pronto para voce conseguir rodar esse programa em seu computador
- Para rodar o projeto instale o C/C++, uma extensão do Visual Studio, com o VsCode aberto faça:
   - Vá em Extensões;
   - Pesquise por C/C++, [Turorial](https://code.visualstudio.com/docs/languages/cpp);
   - Clique em instalar;
   - Com ele instalado volte na vizualização dos arquivos do vsCode, talvez seja necessário fechar e abrir novamente o VsCode.

- Agora no terminal, para executar o programa é necessário executar alguns comandos, digite:
      - Compile os arquivos .c e .h juntos para criar um arquivo de objeto:;
        ```shell script
        gcc -c matematica.c
        ```
      - Em seguida, compile seu programa principal juntamente com o arquivo de objeto criado anteriormente:;
        ```shell script
        gcc main.c matematica.o -o programa_principal
        ```
      - Agora execute o arquivo programa_principal e use o projeto!!;
    
## 🚩 The End

🌟Antes de sair desse repositório não esqueça de deixar sua "star" ajuda muito e não custa nada!! 🌟



