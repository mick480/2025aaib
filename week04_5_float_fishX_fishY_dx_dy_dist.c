///week04_5_float_fishX_fishY_dx_dy_dist
void setup(){
  size(600,400);
}
int x, y;
float fishX = 300, fishY = 200;
void draw(){
  background(#C0ffee);//�̭��O�s0�A���O�r��O
  ellipse(fishX, fishY, 30, 10);
  if(x>0){ // ���}�ƪ���
    y += 2; // ���U��
    if(y>400) x = 0;//�W�L�e���d��A�N��x�ܦ�0
    ellipse(x,y,8,8); //�e�X�p�}��
    float dx = x - fishX, dy = y - fishY; // �V�q
    float d = dist(x,y,fishX, fishY); // �Z��
    fishX += dx / d*4; // ���}�ƾa�L�h
    fishY += dy / d*4;
  }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
