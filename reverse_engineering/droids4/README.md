You need to install:
* Android Studio with emulator
* Android APK decompiler (DEX): https://github.com/skylot/jadx -> You can compile and run gui version from WSL2
* apktool: https://ibotpeaches.github.io/Apktool/ -> tool for reverse engineering APKs
* [optional] Java Decompiler https://java-decompiler.github.io/


1. Decompile APK with
```
apktool d name-of-the-app.apk
```
2. Modify it

3. Recompile modified version:
```
apktool.sh b four/ -o four.modified.apk
```

4. Re-sign it with debug key:
```
jarsigner -verbose -sigalg SHA1withRSA -digestalg SHA1 -keystore ~/.android/debug.keystore four.modified.apk androiddebugkey
```
password is 'android'