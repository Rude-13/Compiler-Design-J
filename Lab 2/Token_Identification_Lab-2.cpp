#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void operators(string s)
{
    for(int i=0; i<s.size(); i++)
      {
          if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '<' && s[i+1] != '=' || s[i] == '>' && s[i+1] != '='  )
          {
              cout<<s[i]<<"  ";
          }
          else if(s[i] == '<' && s[i+1] == '=' || s[i] == '>' && s[i+1] == '=')
          {
              cout<<s[i]<<s[i+1]<<"  ";
          }
          else if(s[i] == '=' && s[i-1] != '>' && s[i-1] != '<' )
          {
              cout<<s[i]<<"  ";
          }

      }
}


void constants(string s)
{
    for(int i=0;i<s.size();i++)
    {
        string temp;
        int j=i;
        while(s[j]>='0' && s[j]<='9')
        {
            temp+=s[j];
            j++;
        }
        if(temp!="")
        {
            cout<<temp<<" ";
            i=j;
            temp="";
        }
    }

}


void punctuations(string s)
{
    for(int i=0; i<s.size(); i++)
      {
          if(s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '[' || s[i] == ']' || s[i] == ','|| s[i] == ';'|| s[i] == '.')
          {
              cout<<s[i]<<" ";
          }
      }
}


void variables(string s)
{
    for(int i=0; i<s.size(); i++)
      {
          if(s[i]>= 'a' && s[i]<= 'z' && s[i-1] == ' ' && s[i+1] == ',' )
          {
              cout<<s[i]<<" ";
          }
          else if(s[i]>= 'a' && s[i]<= 'z' && s[i-1] == ' ' && s[i+1] == ';' )
          {
              cout<<s[i]<<" ";
          }
          else if(s[i]>= 'a' && s[i]<= 'z' && s[i-1] == ' ' && s[i+1] == ' ' )
          {
              cout<<s[i]<<" ";
          }
      }
}


void keywords(string s)
{
    for(int i=0; i<s.size(); i++)
      {
          if(s[i] == 'i' && s[i+1] == 'n' && s[i+2] == 't')
          {
              cout<<"int ";
          }

          else if(s[i] == 'f' && s[i+1] == 'l' && s[i+2] == 'o' && s[i+3] == 'a' && s[i+4] == 't')
          {
              cout<<"float ";
          }

          else if(s[i] == 'd' && s[i+1] == 'o' && s[i+2] == 'u' && s[i+3] == 'b' && s[i+4] == 'l' && s[i+5] == 'e')
          {
              cout<<"double ";
          }

          else if(s[i] == 'r' && s[i+1] == 'e' && s[i+2] == 't' && s[i+3] == 'u' && s[i+4] == 'r' && s[i+5] == 'n')
          {
              cout<<"return ";
          }
          else if(s[i] == 's' && s[i+1] == 't' && s[i+2] == 'r' && s[i+3] == 'i' && s[i+4] == 'n' && s[i+5] == 'g')
          {
              cout<<"string ";
          }

      }

}


void functions(string s)
{
    for(int i=0; i<s.size(); i++)
      {
          if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'i' && s[i+3] == 'n')
          {
              cout<<"main() ";
          }

          else if(s[i] == 'a' && s[i+1] == 'd' && s[i+2] == 'd')
          {
              cout<<"add() ";
          }

      }



}


int main ()
{


  fstream myfile;
  myfile.open ("Source.txt");
  string s;


  cout<<"                         IOKEN IDENTIFICATION"<<endl;
  cout<<"--------------------------------------------------------------------"<<endl<<endl;







  cout<<"Operators    : ";
  while (getline(myfile, s))
  {
        operators(s);
  }
  cout<<endl;
  myfile.close();




  myfile.open ("Source.txt");
  cout<<"Constants    : ";
  while (getline(myfile, s))
  {
    constants(s);
  }
  cout<<endl;
  myfile.close();




  myfile.open ("Source.txt");
  cout<<"Punctuations : ";
  while (getline(myfile, s))
  {
    punctuations(s);
  }
  cout<<endl;
  myfile.close();




  myfile.open ("Source.txt");
  cout<<"Keyword      : ";
  while (getline(myfile, s))
  {
      keywords(s);
  }
  cout<<endl;
  myfile.close();





  myfile.open ("Source.txt");
  cout<<"Variables    : ";
  while (getline(myfile, s))
  {
    variables(s);
  }
  cout<<endl;
  myfile.close();




  myfile.open ("Source.txt");
  cout<<"Function     : ";
  while (getline(myfile, s))
  {
      functions(s);
  }
  cout<<endl;
  myfile.close();

    cout<<endl;

  return 0;
}
