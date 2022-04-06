#ifndef DIE_H
#define DIE_H
class Die
{
  public:
    Die(int = 6);
    void roll();
    int getNum() const;
  private:
    int _num;
    int _sides;
};
#endif