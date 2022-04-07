#include <iostream>
#include <iterator>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

string Calc(vector<string>);
vector<string> parseString(string);
void InputOutput();

string Calc(vector<string> tokens)
{
  stringstream ss;
  vector<string> token = tokens;

  if(token[0] == "SQUARE")
  {
    while(token.size() < 3)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }

    double side = stod(token[1]);

    double area = side*side;

    double perimeter = side*4;

    string output;
    ss << token[0] << " side=" << token[1] << " area=" << fixed << setprecision(2) << area << " perimeter=" << perimeter;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;

  }

  else if(token[0] == "RECTANGLE")
  {
    while(token.size() < 3)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }
    try {double a = stod(token[2]);}
    catch (invalid_argument& e) {
        token[2] = "0";
    }

    double length = stod(token[1]);

    double width = stod(token[2]);

    double area = length*width;

    double perimeter = length*2+width*2;

    string output;
    ss << token[0] << " length=" << token[1] << " width=" << token[2] << " area=" << fixed << setprecision(2) << area << " perimeter=" << perimeter;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else if(token[0] == "CIRCLE")
  {
    while(token.size() < 2)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }

    double radius = stod(token[1]);

    double area = M_PI*radius*radius;

    double perimeter = 2*M_PI*radius;

    string output;
    ss << token[0] << " length=" << token[1] << " area=" << fixed << setprecision(2) << area << " perimeter=" << perimeter;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else if(token[0] == "TRIANGLE")
  {
    while(token.size() < 2)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }

    double side = stod(token[1]);

    double area = (sqrt(3)*side*side)/4;

    double perimeter = 3*side;

    string output;
    ss << token[0] << " side=" << token[1] << " area=" << fixed << setprecision(2) << area << " perimeter=" << perimeter;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else if(token[0] == "CUBE")
  {
    while(token.size() < 2)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }

    double side = stod(token[1]);

    double area = side*side*6;

    double volume = side*side*side;

    string output;
    ss << token[0] << " side=" << token[1] << " surface area=" << fixed << setprecision(2) << area << " volume=" << volume;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else if(token[0] == "BOX")
  {
    while(token.size() < 4)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }
    try {double b = stod(token[2]);}
    catch (invalid_argument& e) {
        token[2] = "0";
    }
    try {double c = stod(token[3]);}
    catch (invalid_argument& e) {
        token[3] = "0";
    }

    double length = stod(token[1]);

    double width = stod(token[2]);

    double height = stod(token[3]);

    double area = length*width*2 + width*height*2 + length*height*2;

    double volume = length*width*height;

    string output;
    ss << token[0] << " length=" << token[1] << " width=" << token[2] << " height=" << token[3] << " surface area=" << fixed << setprecision(2) << area << " volume=" << volume;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else if(token[0] == "CYLINDER")
  {
    while(token.size() < 3)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }
    try {double a = stod(token[2]);}
    catch (invalid_argument& e) {
        token[2] = "0";
    }

    double radius = stod(token[1]);

    double height = stod(token[2]);

    double area = M_PI*radius*radius*2 + height*2*M_PI*radius;

    double volume = M_PI*radius*radius*height;

    string output;
    ss << token[0] << " radius=" << token[1] << " height=" << token[2] << " surface area=" << fixed << setprecision(2) << area << " volume=" << volume;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else if(token[0] == "PRISM")
  {
    while(token.size() < 3)
    {
      token.push_back("0");
    }
    try {double a = stod(token[1]);}
    catch (invalid_argument& e) {
        token[1] = "0";
    }
    try {double a = stod(token[2]);}
    catch (invalid_argument& e) {
        token[2] = "0";
    }

    double side = stod(token[1]);

    double height = stod(token[2]);

    double area = (sqrt(3)*side*side*2)/4 + 3*side*height;

    double volume = (sqrt(3)*side*side*height)/4;

    string output;
    ss << token[0] << " side=" << token[1] << " height=" << token[2] << " surface area=" << fixed << setprecision(2) << area << " volume=" << volume;
    output = ss.str();
    ss.unsetf(ios_base::fixed);
    return output;
  }
  else {
    return "INVALID";
  }

}

vector<string> parseString(string str)
{
 stringstream s(str);
 istream_iterator<string> begin(s), end;
 return vector<string>(begin, end);
}

void InputOutput()
{
  ifstream fin;
  ofstream fout;
  fin.open("Shapes.input.txt");
  fout.open("Shapes.output.txt");
    string shape;
    vector<string> tokens;
    while(!fin.eof())
    {
      getline(fin,shape);
      if(shape.find_first_not_of(" ") != string::npos)
      {
        tokens = parseString(shape);
        if(Calc(tokens).compare("INVALID") != 0)
        {
          cout << Calc(tokens) << endl;
          fout << Calc(tokens) << endl;
        }
        else if(shape.compare("EOF") == 0) break;
        else{ cout << tokens[0] << " invalid object" << endl; }

      }
    }
    fin.close();
    fout.close();
}

int main()
{
  cout << "Programmer: Younghyun Kwon\n";
  cout << "Programmer's ID: 1651849\n";

  InputOutput();
}
