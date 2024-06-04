# Keyboard_Guitar

Keyboard Guitar é uma forma mais divertida e interativa de jogar. Utilizando uma Raspberry Pi Pico, este projeto combina o design de uma guitarra com a funcionalidade de um teclado de computador, oferecendo uma nova experiência para suas gameplays🎸⌨️



## Descrição do Projeto


Este projeto foi desenvolvido para criar um dispositivo que pudesse ser usado como um controle para jogos de computador, em especial **Guitar Hero** ou **Fortnight Festival**. A **Raspberry Pi Pico** foi utilizada como a base do sistema, aproveitando suas capacidades de entrada/saída para mapear os botões da estrutura construida em impressão 3D no formato de guitarra e transformar em funções de teclado.

  

## Funcionalidades

  

**Integração com Jogos:** A Keyboard Guitar pode ser utilizada para jogar uma variedade de jogos de computador, você pode mapear as ações do teclado utilizados no jogo desejado, para os botões na estrutura da guitarra.
  
**Leds Personalizados:** A estrutura da Keyboard Guitar conta com leds RGB endereçaveis em todo o seu corpo e ponta. Você pode personalizar os efeitos dos Leds de acordo com o Jogo que você está jogando.

  

## Componentes Utilizados

**Raspberry Pi Pico:** Responsável por ler as entradas dos botões e convertê-las em sinais de teclado.

**Estrutura de Guitarra:** Estrutura similar à de uma guitarra, feita em Impressora 3D equipada com botões switch de teclado com KeyCaps.

**Software:** Código desenvolvido em C++ com framework em Arduino para a Raspberry Pi Pico, gerenciando a detecção de entradas e a comunicação com o computador.

**Leds RBG Endereçaveis:** Keyboard Guitar conta com leds RGB endereçaveis em todo o seu corpo e ponta.

  

## Como Funciona?

**Conexão:** A Keyboard Guitar é conectada ao computador via cabo USB, após ser conectada ela imitará as funções de um teclado convencional, não necessitando de nenhuma configuração adicional.

**Personalização:** Por padrão a guitarra está configurada para usar as teclas: SDFJKL e "blanck spece", você pode trocar as teclas modificando o código **Keyboard_Guitar.ino**

**Jogabilidade:** Com a estrutura configurada, você pode começar a jogar seus jogos favoritos, usando os botões para simular diferentes dentro do jogo escolhido.

## Instruções de Uso

1.  Clone este repositório para sua máquina local
2.  Abra o código **Keyboard_Guitar.ino**
3.  Configure sua Keyboard Guitar de acordo com suas preferências
4. Grave o código na sua Raspbery pi pico
5. Faça a impressão e montagem da estrutura em 3D
6. Realize a solda de todos os componentes seguindo o esquemático tutorial
7. Conecte a sua Keyboard Guitar ao seu computador
8. Divirta-se!