PImage img;
void setup(){
  size(400,400);
  img=loadImage("images.png");
}

void draw(){
  image(img, 0, 0, 400, 400);
}
