mkdir ~/.MCD
sudo mkdir /opt/MCD
cp UNINSTALL.sh ~/.MCD/UNINSTALL_MCD.sh
sudo cp MCD.png /usr/share/pixmaps/
sudo cp * /opt/MCD/

gcc /opt/MCD/MCD.c -o ~/.MCD/MCD -ansi -pedantic -Wall
chmod +x ~/.MCD/MCD
sudo ln -s ~/.MCD/MCD /usr/bin/
cp MCD.png ~/.MCD/
sudo rm -R /opt/MCD

echo "
#!/usr/bin/env xdg-open
[Desktop Entry]
Version=1.0
Type=Application
Terminal=true
Icon[es_ES]=MCD.png
Exec=MCD %u
Name[es_ES]=MCD
Name=MCD
Icon=mate-panel-launcher
Categories=Application;Education;" >> ~/.MCD/MCD.desktop

sudo cp ~/.MCD/MCD.desktop /usr/share/applications/
chmod +x ~/.MCD/UNINSTALL_MCD.sh
sudo ln -s ~/.MCD/UNINSTALL_MCD.sh /usr/bin/

echo "
#!/usr/bin/env xdg-open
[Desktop Entry]
Version=1.0
Type=Application
Terminal=true
Icon[es_ES]=MCD.png
Exec=UNINSTALL_MCD.sh %U
Name[es_ES]=MCD_Uninstall
Name=MCD_Uninstall
Icon=mate-panel-launcher
Categories=Application;Education;" >> ~/.MCD/MCD_Uninstall.desktop 

sudo cp ~/.MCD/MCD_Uninstall.desktop /usr/share/applications/
cd ..

rm -R MCD

rm MCD_Source.tar.gz

clear

exit

