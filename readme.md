# osu_keypad

<img src="images/keypad.jpg" width="400" alt="Osu Keypad"/>

L'**osu_keypad** è un progetto fai-da-te progettato e costruito da zero. Questo keypad è pensato per giocare a [Osu!](https://osu.ppy.sh/) e integra design personalizzato, un'elettronica semplice e illuminazione LED RGB per un tocco estetico.

## Descrizione del progetto

Il progetto è stato realizzato interamente da me, progettando la struttura in **Fusion 360** e realizzando la PCB con un **Arduino Pro Micro**. La struttura è tagliata a laser da lastre di plexiglass e assemblata con viti e bulloni. 

Il keypad utilizza due switch meccanici, pulsanti piccoli (spesso inclusi nei kit Arduino), e LED RGB **WS2812** per l'illuminazione. È un dispositivo semplice ma funzionale, pensato per migliorare l'esperienza di gioco.

Inoltre, il keypad supporta **VIA**, un software che permette di modificare facilmente il layout della tastiera senza dover ricompilare il firmware. Grazie a VIA, puoi configurare i tasti direttamente dal sito [usevia.app](https://usevia.app/).

---

### PCB - Lato superiore
<img src="images/pcbUp.jpg" width="300" alt="PCB lato superiore"/>

### PCB - Lato inferiore
<img src="images/pcbDwn.jpg" width="300" alt="PCB lato inferiore"/>

---

## Dettagli hardware

- **Controller**: Arduino Pro Micro
- **Illuminazione**: LED RGB WS2812
- **Pulsanti**: Due switch meccanici e pulsanti piccoli (standard dei kit Arduino)
- **Struttura**: Plexiglass tagliato a laser, assemblato con 4 viti e bulloni
- **Supporto software**: Configurazione tramite VIA (nessuna ricompilazione necessaria)

---

## Configurazione e utilizzo

### Compilazione e flashing
Per compilare e flashare il firmware sul dispositivo, usa il seguente comando:

```bash
qmk flash -kb osu_keypad -km via
```
> **Nota**: Assicurati di avere [QMK configurato correttamente](https://docs.qmk.fm/#/getting_started_build_tools). 
### Configurazione del layout con VIA
 Una volta flashato il firmware, puoi configurare i tasti tramite il sito [usevia.app](https://usevia.app/). VIA ti permette di:
* Modificare il layout della tastiera. 
* Assegnare funzioni personalizzate ai tasti. 
* Salvare e caricare profili di configurazione
