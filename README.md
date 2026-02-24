# 🗡️ Legenden om Zelda - Tidens okarina

## 📖 Om Projektet

Detta projekt tillhandahåller en komplett svensk översättning av **The Legend of Zelda: Ocarina of Time** (Tidens okarina). Arbetet har pågått av och till under cirka tre år och bygger på en noggrann genomgång av det japanska originalmanuset, korsrefererat mot det engelska, tyska och franska skriptet. Målet har varit att skapa en svensk text som låter naturligt samtidigt som den förblir trogen det japanska källmaterialet.

En del av arbetet har bestått i att själv kartlägga PAL-ROM:en och dokumentera var alla bitmapbilder jag behövde fanns. Jag har byggt egna verktyg från grunden i Python, C och C#, bland annat för yaz0-komprimering/dekomprimering, extrahering/konvertering av bitmappar samt en editor för redigering av spelets text.

Jag har även ändrat tillbaka till Nintendo 64-färger för knappar i GameCube-ROM:arna och återinfört Nintendo 64-bootlogon. För GameCube-ROM:arna man hittar på PAL-bonusskivor har jag bytt ut spelets videointerface (NTSC) mot standard-PAL så att spelet visas korrekt på europeiska Nintendo 64.

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

## 🚀 Patchning av ROM och mod för Ship of Harkinian

### 💻 Webbläsare (Rekommenderat)
Den enklaste metoden är att använda webbverktyget jag har satt upp här:
**[🌐 Patcha din ROM här](https://vrilya.github.io/ocarinaswe/)**

### 📁 Manuell patchning
1. Ladda ner patch-filen från **[Releases](https://github.com/Vrilya/ocarinaswe/releases)**
2. Använd ditt föredragna verktyg för att applicera patchen

💡 **Notera:**  
ROM-filen måste vara någon av dessa:  
- **Database match:** Legend of Zelda, The - Ocarina of Time (Europe) (En,Fr,De)  
- **SHA-1:** `328a1f1beba30ce5e178f031662019eb32c5f3b5`
- **MD5:** `E040DE91A74B61E3201DB0E2323F768A`
- **Database match:** Legend of Zelda, The - Ocarina of Time (Europe) (En,Fr,De) (Rev 1)
- **SHA-1:** `cfbb98d392e4a9d39da8285d10cbef3974c2f012`
- **MD5:** `d714580dd74c2c033f5e1b6dc0aeac77`
- **Database match:** Legend of Zelda, The - Ocarina of Time (Europe) (GameCube)
- **SHA-1:** `0227d7c0074f2d0ac935631990da8ec5914597b4`
- **MD5:** `2c27b4e000e85fd78dbca551f1b1c965`
- **Database match:** Legend of Zelda, The - Ocarina of Time - Master Quest (Europe) (En,Fr,De) (GameCube)
- **SHA-1:** `f46239439f59a2a594ef83cf68ef65043b1bffe2`
- **MD5:** `1618403427e4344a57833043db5ce3c3`
- **Database match:** Legend of Zelda, The - Ocarina of Time (USA)
- **SHA-1:** `ad69c91157f6705e8ab06c79fe08aad47bb57ba7`
- **MD5:** `5bd1fe107bf8106b2ab6650abecd54d6`
- **Database match:** Legend of Zelda, The - Ocarina of Time (USA) (Rev 1)
- **SHA-1:** `d3ecb253776cd847a5aa63d859d8c89a2f37b364`
- **MD5:** `721fdcc6f5f34be55c43a807f2a16af4`
- **Database match:** Legend of Zelda, The - Ocarina of Time (USA) (Rev 2)
- **SHA-1:** `41b3bdc48d98c48529219919015a1af22f5057c2`
- **MD5:** `57a9719ad547c516342e1a15d5c28c3d`
- **Database match:** Legend of Zelda, The - Ocarina of Time (USA) (GameCube)
- **SHA-1:** `b82710ba2bd3b4c6ee8aa1a7e9acf787dfc72e9b`
- **MD5:** `cd09029edcfb7c097ac01986a0f83d3f`
- **Database match:** Legend of Zelda, The - Ocarina of Time - Master Quest (USA) (GameCube)
- **SHA-1:** `8b5d13aac69bfbf989861cfdc50b1d840945fc1d`
- **MD5:** `da35577fe54579f6a266931cc75f512d`

### 🚢 Ship of Harkinian Setup

Det enklaste är att ladda ner den färdiga OTR-filen via GameBanana:  
**[📥 Direktlänk till modens sida här](https://gamebanana.com/mods/613613)**  
Packa upp arkivet och placera `Svenska.otr` i `mods`-mappen i din Ship of Harkinian-installation.  

Om du hellre vill skapa filen själv manuellt:  

1. **Ladda ner** `OTRMod_PAL10.txt` från [Releases](https://github.com/Vrilya/ocarinaswe/releases)  
2. **Dekomprimera din redan patchade ROM** med yaz0encdec (Bara PAL 1.0 än så länge):  
   ```
   https://github.com/Vrilya/yaz0encdec
   ```
3. **Generera OTR-filen** på:  
   ```
   https://soh.xoas.eu.org/
   ```
   - Välj `OTRMod_PAL10.txt` under "Choose a script"  
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
- **Steam**: `Vrilya`
- **Email**: `vinterhjarta@gmail.com`
- **YouTube**: Du kan även kommentera på min YouTube-kanal.

## 🛠️ Verktyg & Resurser

- **Bitmap-verktyg (VOoTIE)**: [GitHub Repository](https://github.com/Vrilya/VOoTIE)
- **Yaz0-Kompressor/dekompressor (yaz0encdec)**: [GitHub Repository](https://github.com/Vrilya/yaz0encdec)
- **Texteditorn jag utvecklade för det här projektet (OoT Text Editor)**: [GitHub Repository](https://github.com/Vrilya/oottexteditor)

## 📜 Användning & Rättigheter

Jag delar **inte** med mig av ROM-filer och kan därför inte hjälpa till med att skaffa dem.  
Utöver det gäller: *Gör vad du vill ska vara lagen*, som en viss engelsk poet en gång skrev.

Du behöver inte fråga mig om lov för att:  
- Göra egna repros med den här översättningen  
- Skriva om, ändra eller vidareutveckla texten  
- Använda rader du tycker om i din egen översättning  
- Skapa helt nya projekt baserade på mitt arbete  

Kort sagt - använd, förändra och sprid hur du vill.

---

<div align="center">

**Tack för att du visar intresse för projektet!** ⭐

*Om du uppskattar min översättning, lämna gärna en stjärna på repot!*

</div>
