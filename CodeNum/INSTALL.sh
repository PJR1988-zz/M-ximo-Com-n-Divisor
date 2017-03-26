mkdir ~/.CodeNum
sudo mkdir /opt/CodeNum
cp UNINSTALL.sh ~/.CodeNum/UNINSTALL_CodeNum.sh
sudo cp CodeNum.png /usr/share/pixmaps/
sudo cp * /opt/CodeNum/

gcc /opt/CodeNum/CodeNum.c -o ~/.CodeNum/CodeNum -ansi -pedantic -Wall
chmod +x ~/.CodeNum/CodeNum
sudo ln -s ~/.CodeNum/CodeNum /usr/bin/
cp CodeNum.png ~/.CodeNum/
sudo rm -R /opt/CodeNum

echo "
#!/usr/bin/env xdg-open
[Desktop Entry]
Version=1.0
Type=Application
Terminal=true
Icon[es_ES]=CodeNum.png
Exec=CodeNum u%
Name[es_ES]=CodeNum
Name=CodeNum
Icon=mate-panel-launcher
Categories=Application;Education;" >> ~/.CodeNum/CodeNum.desktop

sudo cp ~/.CodeNum/CodeNum.desktop /usr/share/applications/
chmod +x ~/.CodeNum/UNINSTALL_CodeNum.sh
sudo ln -s ~/.CodeNum/UNINSTALL_CodeNum.sh /usr/bin/

echo "
#!/usr/bin/env xdg-open
[Desktop Entry]
Version=1.0
Type=Application
Terminal=true
Icon[es_ES]=CodeNum.png
Exec=UNINSTALL_CodeNum.sh u%
Name[es_ES]=CodeNum_Uninstall
Name=CodeNum_Uninstall
Icon=mate-panel-launcher
Categories=Application;Education;" >> ~/.CodeNum/CodeNum_Uninstall.desktop 

sudo cp ~/.CodeNum/CodeNum_Uninstall.desktop /usr/share/applications/
cd ..

rm -R CodeNum

rm CodeNum_Source.tar.gz

clear

exit

