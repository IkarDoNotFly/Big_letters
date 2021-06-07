#include <QCoreApplication>
#include <QTextStream>
#include<QString>
#include<QDebug>


QTextStream cout(stdout);
QTextStream cin(stdin);

using namespace std;
int width,height;


int abs(int d){
    return d < 0 ? -1 * d : d;
}
void printA()
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
}

void printB()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                printf("#");
            else if (j == (width - 2)
                     && !(i == 0 || i == height - 1
                          || i == half))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void printC()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < (height - 1); j++) {
            if (i == 0 || i == height - 1)
                printf("#");
            else
                continue;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'D'
void printD()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                printf("#");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'E'
void printE()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                || (i == height / 2
                    && j <= height / 2))
                printf("#");
            else
                continue;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'F'
void printF()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < height; j++) {
            if ((i == 0) || (i == height / 2
                             && j <= height / 2))
                printf("#");
            else
                continue;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'G'
void printG()
{
    int i, j;
    width--;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1)
                && (j == 0 || j == width - 1))
                printf(" ");
            else if (j == 0)
                printf("#");
            else if (i == 0 && j <= height)
                printf("#");
            else if (i == height / 2
                     && j > height / 2)
                printf("#");
            else if (i > height / 2
                     && j == width - 1)
                printf("#");
            else if (i == height - 1
                     && j < width)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'H'
void printH()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < height; j++) {
            if ((j == height - 1)
                || (i == height / 2))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void printI()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1)
                printf("#");
            else if (j == height / 2)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'J'
void printJ()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == height - 1 && (j > 0
                                    && j < height - 1))
                printf("#");
            else if ((j == height - 1
                      && i != height - 1)
                     || (i > (height / 2) - 1
                         && j == 0 && i != height - 1))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'K'
void printK()
{
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j <= half; j++) {
            if (j == abs(dummy))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        dummy--;
    }
}

// Function to print the pattern of 'L'
void printL()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j <= height; j++) {
            if (i == height - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'M'
void printM()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("#");
            else if (j == counter
                     || j == height - counter - 1)
                printf("#");
            else
                printf(" ");
        }
        if (counter == height / 2) {
            counter = -99999;
        }
        else
            counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'N'
void printN()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("#");
            else if (j == counter)
                printf("#");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'O'
void printO()
{
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space)
                || j == abs(space))
                printf("#");
            else if ((i == 0
                      || i == height - 1)
                     && j > abs(space)
                     && j < width - abs(space))
                printf("#");
            else
                printf(" ");
        }
        if (space != 0
            && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        printf("\n");
    }
}

// Function to print the pattern of 'P'
void printP()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2)
                && j < height - 1)
                printf("#");
            else if (i < height / 2
                     && j == height - 1 && i != 0)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'Q'
void printQ()
{
    printO();
    int i, j, d = height;
    for (i = 0; i < height / 2; i++) {
        for (j = 0; j <= d; j++) {
            if (j == d)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        d++;
    }
}

// Function to print the pattern of 'R'
void printR()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == half)
                && j < (width - 2))
                printf("#");
            else if (j == (width - 2)
                     && !(i == 0 || i == half))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'S'
void printS()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                 || i == height - 1))
                printf("#");
            else if (i < height / 2
                     && j == 0)
                printf("#");
            else if (i > height / 2
                     && j == height - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'T'
void printT()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                printf("#");
            else if (j == height / 2)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'U'
void printU()
{
    int i, j;
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            printf("#");
        else
            printf(" ");
        for (j = 0; j < height; j++) {
            if (((i == height - 1)
                 && j >= 0
                 && j < height - 1))
                printf("#");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'V'
void printV()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter
                || j == width - counter - 1)
                printf("#");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'W'
void printW()
{
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++) {
        printf("#");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("#");
            else if ((i >= height / 2)
                     && (j == counter
                         || j == height - counter - 1))
                printf("#");
            else
                printf(" ");
        }
        if (i >= height / 2) {
            counter++;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'X'
void printX()
{
    int i, j, counter = 0;
    for (i = 0; i <= height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter)
                printf("#");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'Y'
void printY()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter
                       && i <= height / 2)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        if (i < height / 2)
            counter++;
    }
}

// Function to print the pattern of 'Z'
void printZ()
{
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1
                || j == counter)
                printf("#");
            else
                printf(" ");
        }
        counter--;
        printf("\n");
    }
}
void printUnknown(){
   printf("? ? ? \n");
   printf("?    ?\n");
   printf("    ?\n");
   printf("   ?\n");
   printf("\n");
   printf("  ?\n");

}
void printText(QChar letter){
   if( letter=='a' || letter=='A'){
       printA();
   }
   else if (letter=='b' || letter=='B') {
       printB();
   }
   else if (letter=='c' || letter=='C') {
       printC();
   }
   else if (letter=='d' || letter=='D') {
       printD();
   }
   else if (letter=='e' || letter=='E') {
       printE();
   }
   else if (letter=='f' || letter=='F') {
       printF();
   }
   else if (letter=='g' || letter=='G') {
       printG();
   }
   else if (letter=='h' || letter=='H') {
       printH();
   }
   else if (letter=='i' || letter=='I') {
       printI();
   }
   else if (letter=='j' || letter=='J') {
       printJ();
   }
   else if (letter=='k' || letter=='K') {
       printB();
   }
   else if (letter=='l' || letter=='L') {
       printL();
   }
   else if (letter=='m' || letter=='M') {
       printM();
   }
   else if (letter=='n' || letter=='N') {
       printN();
   }
   else if (letter=='o' || letter=='O') {
       printO();
   }
   else if (letter=='p' || letter=='P') {
       printP();
   }
   else if (letter=='q' || letter=='Q') {
       printQ();
   }
   else if (letter=='r' || letter=='R') {
       printR();
   }
   else if (letter=='s' || letter=='S') {
       printS();
   }
   else if (letter=='t' || letter=='T') {
       printT();
   }
   else if (letter=='u' || letter=='U') {
       printU();
   }
   else if (letter=='v' || letter=='V') {
       printV();
   }
   else if (letter=='w' || letter=='W') {
       printW();
   }
   else if (letter=='x' || letter=='X') {
       printX();
   }
   else if (letter=='y' || letter=='Y') {
       printY();
   }
   else if (letter=='z' || letter=='Z') {
       printZ();
   }
   else{
       printUnknown();
   }
}

int main(int argc, char *argv[])
{
    QString input;

    QCoreApplication a(argc, argv);

    qDebug()<<"Input height:";
    cin>>height;
     qDebug()<<"Input width:";
     cin>>width;
    qDebug()<<"Input text:";
    cin>>input;

    for(int i=0;i<input.length();i++){
        printText(input[i]);

    }

    return a.exec();
}
