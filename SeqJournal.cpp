#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
  // Create and open a text file

  string filenamein,filenameout,line,str ;
  char  str1[1000] ;
  int i=1;
  char ch;
  filenamein = "test.txt";
  ifstream fin;
  fin.open("test.txt", ios::in);
  filenameout = filenamein + ".jln";

 ofstream fout("test.jln");
  cout << filenameout ;
  // Write to the file
  // while (getline (fin,line)){
  //      getline (fin,line);
  str.clear();
 //while (get(ch) ) {
 int k=0;
 int j=0,convert=0;
str.clear()  ;
   while (fin.get(ch))
    {


     //   if (ch != '\n' )
     //  if (ch != char(13) )
      if (ch != char(10) )
        {
             if (ch != char(0) ) {
                   if (ch != char(13) ) {
                   str = str + ch;
                   }
                //   str[str.size()]='\0';
              //     j++;
             }

        }
        else {

             str = str + ch;
            // str[str.size()]='\0';
              //  str[j] = char(10); // '\n';
          i++;
          cout << setw(9) << setfill('0') << i << " "<< str   ;
         fout << setw(9) <<  setfill('0') <<  i  << " "<< str ;
         str.clear();
        // j=0;
        }

    }

  // Close the file
  fin.close();
  fout.close();
}
