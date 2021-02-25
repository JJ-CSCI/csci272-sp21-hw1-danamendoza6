class Binomial {
  private:
  float coefficient;
  int power;
  float coefficient1;
  float coefficient2;
  int power1;
  int power2;

 public: 
 Binomial (float coefficient = 1.0, int power = 1);
 float GetCoefficient(int index);
 int GetPower(int index);
 void SetPower(int power, int index);
 void Add(const Binomial & object);
 void Multiply(float object);
 void Multiply(float coefficient, int power); 
 };
 