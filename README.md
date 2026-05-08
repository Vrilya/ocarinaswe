# 🗡️ Legenden om Zelda - Tidens okarina

## 📖 Om Projektet

Detta projekt tillhandahåller en komplett svensk översättning av **The Legend of Zelda: Ocarina of Time** (Tidens okarina). Arbetet har pågått av och till under cirka tre år och bygger på en noggrann genomgång av det japanska originalmanuset, korsrefererat mot det engelska, tyska och franska skriptet. Målet har varit att skapa en svensk text som låter naturligt samtidigt som den förblir trogen det japanska källmaterialet.

En del av arbetet har bestått i att själv kartlägga PAL-ROM:en och dokumentera var alla bitmapbilder jag behövde fanns. Jag har byggt egna verktyg från grunden i Python, C och C#, bland annat för yaz0-komprimering/dekomprimering, extrahering/konvertering av bitmappar samt en editor för redigering av spelets text.

Jag har även ändrat tillbaka till Nintendo 64-färger för knappar i GameCube-ROM:arna och återinfört Nintendo 64-bootlogon. För GameCube-ROM:arna man hittar på PAL-bonusskivor har jag bytt ut spelets videointerface (NTSC) mot Full-PAL så att spelet visas korrekt på europeiska Nintendo 64.

## 🖼️ Screenshots

<div align="center">

| <img src="https://vrilya.github.io/ocarinaswe/images/ganon.png" width="300" alt="Ganon"> | <img src="https://vrilya.github.io/ocarinaswe/images/kingdodongo.png" width="300" alt="King Dodongo"> |
|:---:|:---:|
| <img src="https://vrilya.github.io/ocarinaswe/images/kingsgrave1.png" width="300" alt="King's Grave"> | <img src="https://vrilya.github.io/ocarinaswe/images/title.png" width="300" alt="Title Screen"> |
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
- **Database match:** iQue Chinese (Released)
- **SHA-1:** `1015d0f3af34b89149bfd773580bbc66466af54e`
- **MD5:** `0ab48b2d44a74b3bb2d384f6170c2742`

### 🚢 Ship of Harkinian Setup

Det enklaste sättet är att ladda ner den färdiga OTR-filen via GameBanana: **[📥 Direktlänk till modens sida här](https://gamebanana.com/mods/613613)**<br>
Packa upp arkivet och placera `Svenska.otr` i `mods`-mappen i din Ship of Harkinian-installation.

Om du hellre vill generera OTR-filen själv kan du använda webbverktyget: **[🌐 Generera OTR här](https://vrilya.github.io/ocarinaswe/index_otr.html)**<br>
Välj din ROM-fil och låt verktyget sköta resten.

Vill du använda ett annat verktyg kan du ladda ner `otr_skriptpaket.zip` från [Releases](https://github.com/Vrilya/ocarinaswe/releases).

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
- **Färgpatch för GC-versionernas knappar och cursors (patch-gc-colors)**: [GitHub Repository](https://github.com/Vrilya/patch-gc-colors)
- **PAL-videokorrigering för GC-EU / GC-EU-MQ (patch-vi-pal)**: [GitHub Repository](https://github.com/Vrilya/patch-vi-pal)
- **Bootlogo-patcher för GC-versionerna (patch-gc-bootlogo)**: [GitHub Repository](https://github.com/Vrilya/patch-gc-bootlogo)
- **NO CONTROLLER-patch för GC-versionerna (patch-gc-nocon)**: [GitHub Repository](https://github.com/Vrilya/patch-gc-nocon)
- **Credits-krasch-patch för GC-versionerna (patch-gc-credits)**: [GitHub Repository](https://github.com/Vrilya/patch-gc-credits)
- **Title-screen-texteditor för `NO CONTROLLER` / `PRESS START` (oot-title-text)**: [GitHub Repository](https://github.com/Vrilya/oot-title-text)
- **Texteditorn jag utvecklade för det här projektet (OoT Text Editor)**: [GitHub Repository](https://github.com/Vrilya/oottexteditor)
- **Workflow för batch-hantering av hela projektet (OoT Workflow)**: [GitHub Repository](https://github.com/Vrilya/oot-workflow)
- **En teknisk analys av kopieringsskyddet i Ocarina of Time**: [GitHub-repository](https://github.com/Vrilya/oot-anti-piracy)

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
