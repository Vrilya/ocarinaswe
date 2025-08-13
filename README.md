# 🗡️ Legenden om Zelda - Tidens okarina

## 📖 Om Projektet

Detta projekt tillhandahåller en komplett svensk översättning av **The Legend of Zelda: Ocarina of Time** (Tidens okarina). Arbetet har pågått av och till under cirka tre år och bygger på en noggrann genomgång av det japanska originalmanuset, korsrefererat mot det engelska, tyska och franska skriptet. Målet har varit att skapa en svensk text som låter naturligt samtidigt som den förblir trogen det japanska källmaterialet.

En del av arbetet har bestått i att själv kartlägga PAL-ROM:en och dokumentera var alla bitmapbilder jag behövde fanns. Jag har byggt egna verktyg i Python och C#, bland annat för extrahering/konvertering av bitmappar samt en editor för redigering av spelets text.

## 🖼️ Screenshots

<div align="center">

| <img src="https://vrilya.github.io/ocarinaswe/images/ganon.png" width="300" alt="Ganon"> | <img src="https://vrilya.github.io/ocarinaswe/images/kingdodongo.png" width="300" alt="King Dodongo"> |
|:---:|:---:|
| <img src="https://vrilya.github.io/ocarinaswe/images/kingsgrave.png" width="300" alt="King's Grave"> | <img src="https://vrilya.github.io/ocarinaswe/images/title.png" width="300" alt="Title Screen"> |
| <img src="https://vrilya.github.io/ocarinaswe/images/ui.png" width="300" alt="UI"> | <img src="https://vrilya.github.io/ocarinaswe/images/zeldaletter.png" width="300" alt="Zelda Letter"> |

</div>

## 🎥 Video

Videor från översättningen kan du hitta här:
**[🔗 Vrilyas YouTube-kanal](https://www.youtube.com/@brinkofdeath)**

## 🚀 Installation

### 💻 Webbläsare (Rekommenderat)
Den enklaste metoden är att använda webbverktyget jag har satt upp här:
**[🌐 Patcha din ROM här](https://vrilya.github.io/ocarinaswe/)**

### 📁 Manuell patchning
1. Ladda ner patch-filen från **[Releases](https://github.com/Vrilya/ocarinaswe/releases)**
2. Använd ditt föredragna verktyg för att applicera patchen

### 🚢 Ship of Harkinian Setup

För att skapa en mod för Ship of Harkinian:

1. **Ladda ner** `OTRMod_Svenska.txt` från [Releases](https://github.com/Vrilya/ocarinaswe/releases)

2. **Dekomprimera din redan patchade ROM** med z64decompress:
   ```
   https://github.com/z64utils/z64decompress/
   ```

3. **Generera OTR-filen** på:
   ```
   https://soh.xoas.eu.org/
   ```
   - Välj `OTRMod_Svenska.txt` under "Choose a script"
   - Välj den dekomprimerade ROM-filen under "Choose a ROM"
   - Klicka på "Generate OTR"

4. **Installera moden**:
   - Spara den genererade `Svenska.otr`-filen till `mods`-mappen i din Ship of Harkinian-installation

> ⚠️ **Viktigt**: Andra mods som påverkar text och bilder kan orsaka konflikter och störa funktionaliteten.

## 🔮 Framtida Planer

Om folk gillar den här översättningen och det finns tillräckligt med intresse så kanske jag tar mig an Majora's Mask som nästa projekt. Det är inget jag lovar eller har bestämt mig för än, men tanken finns där beroende på hur det här tas emot.

## 📞 Kontakt

Har du frågor eller synpunkter? Kontakta mig gärna:

- **Discord**: `.vrilya`
- **Email**: `vinterhjarta@gmail.com`
- **YouTube**: Du kan även kommentera här.

## 🛠️ Verktyg & Resurser

- **Bitmap-verktyg**: Redan tillgängligt på min GitHub
- **Övriga verktyg**: Kommer att publiceras vid senare tillfälle
- **z64decompress**: [GitHub Repository](https://github.com/z64utils/z64decompress/)

---

<div align="center">

**Tack för att du visar intresse för projektet!** ⭐

*Om du uppskattar min översättning, lämna gärna en stjärna på repot!*

</div>
