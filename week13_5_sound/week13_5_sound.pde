// week13_5_sound 要播放音樂
// 要先安裝Sketch-Library-Manage Libraries...
// 找sound下載sound的函式點Install安裝完
import processing.sound.*; //使用聲音的外掛
SoundFile mySound; //宣告變數mysound他是SoundFile
void setup(){
  size(400, 400);//視窗大小 400X400小心檔名的空白
  //記得要先把音樂檔"Intro Song_Final.mp3"拉到程式裡
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();//在播放剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT) mocket.play();
  if(mouseButton==RIGHT) sword.play();
}
void draw(){

}
