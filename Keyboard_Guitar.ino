#include <WS2812FX.h> 
#include "Keyboard.h"

// Definições para os LEDs
#define LED_COUNT_BASE 33  // Número de LEDs na base
#define LED_COUNT_PONTA 6  // Número de LEDs na ponta
#define LED_BASE 21        // Pino para os LEDs da base
#define LED_PONTA 20       // Pino para os LEDs da ponta

// Inicialização dos objetos WS2812FX para controle dos LEDs
WS2812FX base = WS2812FX(LED_COUNT_BASE, LED_BASE, NEO_RGB + NEO_KHZ800);
WS2812FX ponta = WS2812FX(LED_COUNT_PONTA, LED_PONTA, NEO_RGB + NEO_KHZ800);

// Definições dos pinos de entrada
#define PIN1 0
#define PIN2 1
#define PIN3 2
#define PIN4 3
#define PIN5 4
#define PIN6 6

void setup() {
  // Inicializa a serial para depuração
  Serial.begin(9600);
  
  // Inicializa o controle sobre o teclado
  Keyboard.begin();

  // Configura os pinos de entrada com pull-up interno
  pinMode(PIN1, INPUT_PULLUP);
  pinMode(PIN2, INPUT_PULLUP);
  pinMode(PIN3, INPUT_PULLUP);
  pinMode(PIN4, INPUT_PULLUP);
  pinMode(PIN5, INPUT_PULLUP);
  pinMode(PIN6, INPUT_PULLUP);

  // Inicializa e configura os LEDs da base
  base.init();
  base.setBrightness(120);
  base.setSpeed(1000);
  base.setColor(0x00DEDE);
  base.setMode(0);
  base.start();

  // Inicializa e configura os LEDs da ponta
  ponta.init();
  ponta.setBrightness(120);
  ponta.setSpeed(1000);
  ponta.setColor(0x00DEDE);
  ponta.setMode(0);
  ponta.start();
}

void loop() {
  // Atualiza os efeitos dos LEDs
  base.service();
  ponta.service();

  // Verifica o estado dos pinos e simula teclas do teclado
  if (digitalRead(PIN1) == LOW) {
    Keyboard.press('d');
  } else {
    Keyboard.release('d');
  }
  
  if (digitalRead(PIN2) == LOW) {
    Keyboard.press('f');
  } else {
    Keyboard.release('f');
  }
  
  if (digitalRead(PIN3) == LOW) {
    Keyboard.press('j');
  } else {
    Keyboard.release('j');
  }
  
  if (digitalRead(PIN4) == LOW) {
    Keyboard.press('k');
  } else {
    Keyboard.release('k');
  }
  
  if (digitalRead(PIN5) == LOW) {
    Keyboard.press('l');
  } else {
    Keyboard.release('l');
  }
  
  if (digitalRead(PIN6) == LOW) {
    Keyboard.press(' ');

    // Alterna o modo dos LEDs quando o botão é pressionado
    base.setMode((base.getMode() + 1) % base.getModeCount());
    base.start();
    ponta.setMode((ponta.getMode() + 1) % ponta.getModeCount());
    ponta.start();
  } else {
    Keyboard.release(' ');
  }
}
