#include<stdio.h>
#include<string.h>
#include<windows.h>
void before_ModernPeriodicTable() __attribute__((constructor));

void before_ModernPeriodicTable()
{
    printf("\t\tName    : Abir Anjum Prottoy\n");
}

int main()
{
    char n[2];
    char c[1];
    printf("\n\t\t-----------------------------");
    printf("\n\t\t| THE MODERN PERIODIC TABLE |\n");
    printf("\t\t-----------------------------\n\n");



    printf("\tH                                                   He\n\n");
    printf("\tLi Be                                B  C  N  O  F  Ne\n\n");
    printf("\tNa Mg                                Al Si P  S  Cl Ar\n\n");
    printf("\tK  Ca Sc  Ti V  Cr Mn Fe Co Ni Cu Zn Ga Ge As Se Br Kr\n\n");
    printf("\tRb Sr Y   Zr Nb Mo Tc Ru Rh Pd Ag Cd In Sn Sb Te I  Xe\n\n");
    printf("\tCs Ba La  Hf Ta W  Re Os Ir Pt Au Hg Tl Pb Bi Po At Rn\n\n");
    printf("\tFr Ra Ac  Rf Db Sg Bh Hs Mt Ds Rg Cn Nh Fl Mc Lv Ts Og\n\n\n");
    printf("\t\t  Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu\n\n");
    printf("\t\t  Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr\n\n\n");


    printf("\nEnter Atomic Symbol : ");
    gets(n);
    printf("\n");

    Sleep(1000);

    if(strcmp(n,"H")==0)
    {
        printf("\n\t\t\tName                     :              Hydrogen\n");
        printf("\t\t\tAtomic Number            :                  1\n");
        printf("\t\t\tAtomic Mass              :                  1\n");
        printf("\t\t\tElectronic Configuration :                  1s1\n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  1\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"He")==0)
    {
        printf("\n\t\t\tName                     :              Helium\n");
        printf("\t\t\tAtomic Number            :                  2\n");
        printf("\t\t\tAtomic Mass              :                  4\n");
        printf("\t\t\tElectronic Configuration :                  1s2\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                  1\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Li")==0)
    {
        printf("\n\t\t\tName                     :              Lithium\n");
        printf("\t\t\tAtomic Number            :                  3\n");
        printf("\t\t\tAtomic Mass              :                  7\n");
        printf("\t\t\tElectronic Configuration :               [He] 2s1\n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Be")==0)
    {
        printf("\n\t\t\tName                     :              Beryllium\n");
        printf("\t\t\tAtomic Number            :                  4\n");
        printf("\t\t\tAtomic Mass              :                  9\n");
        printf("\t\t\tElectronic Configuration :               [He] 2s2\n");
        printf("\t\t\tGroup                    :                  2\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"B")==0)
    {
        printf("\n\t\t\tName                     :               Boron\n");
        printf("\t\t\tAtomic Number            :                  5\n");
        printf("\t\t\tAtomic Mass              :                  11\n");
        printf("\t\t\tElectronic Configuration :             [He] 2s2 2p1\n");
        printf("\t\t\tGroup                    :                  13\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"C")==0)
    {
        printf("\n\t\t\tName                     :               Carbon\n");
        printf("\t\t\tAtomic Number            :                  6\n");
        printf("\t\t\tAtomic Mass              :                  12\n");
        printf("\t\t\tElectronic Configuration :            [He] 2s2 2p2\n");
        printf("\t\t\tGroup                    :                  14\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"N")==0)
    {
        printf("\n\t\t\tName                     :              Nitrogen\n");
        printf("\t\t\tAtomic Number            :                  7\n");
        printf("\t\t\tAtomic Mass              :                  14\n");
        printf("\t\t\tElectronic Configuration :            [He] 2s2 2p3\n");
        printf("\t\t\tGroup                    :                  15\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"O")==0)
    {
        printf("\n\t\t\tName                     :               Oxygen\n");
        printf("\t\t\tAtomic Number            :                  8\n");
        printf("\t\t\tAtomic Mass              :                  16\n");
        printf("\t\t\tElectronic Configuration :             [He] 2s2 2p4\n");
        printf("\t\t\tGroup                    :                  16\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"F")==0)
    {
        printf("\n\t\t\tName                     :              Fluorine\n");
        printf("\t\t\tAtomic Number            :                  9\n");
        printf("\t\t\tAtomic Mass              :                  19\n");
        printf("\t\t\tElectronic Configuration :             [He] 2s2 2p5\n");
        printf("\t\t\tGroup                    :                  17\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Ne")==0)
    {
        printf("\n\t\t\tName                     :               Neon\n");
        printf("\t\t\tAtomic Number            :                  10\n");
        printf("\t\t\tAtomic Mass              :                  20\n");
        printf("\t\t\tElectronic Configuration :             [He] 2s2 2p6\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                  2\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Na")==0)
    {
        printf("\n\t\t\tName                     :               Sodium\n");
        printf("\t\t\tAtomic Number            :                  11\n");
        printf("\t\t\tAtomic Mass              :                  23\n");
        printf("\t\t\tElectronic Configuration :              [Ne] 3s1\n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Mg")==0)
    {
        printf("\n\t\t\tName                     :              Magnesium\n");
        printf("\t\t\tAtomic Number            :                  12\n");
        printf("\t\t\tAtomic Mass              :                  24\n");
        printf("\t\t\tElectronic Configuration :              [Ne] 3s2\n");
        printf("\t\t\tGroup                    :                  2\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Al")==0)
    {
        printf("\n\t\t\tName                     :              Aluminium\n");
        printf("\t\t\tAtomic Number            :                  13\n");
        printf("\t\t\tAtomic Mass              :                  27\n");
        printf("\t\t\tElectronic Configuration :              [Ne] 3s2 3p1\n");
        printf("\t\t\tGroup                    :                  13\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Si")==0)
    {
        printf("\n\t\t\tName                     :               Silicon\n");
        printf("\t\t\tAtomic Number            :                  14\n");
        printf("\t\t\tAtomic Mass              :                  28\n");
        printf("\t\t\tElectronic Configuration :               [Ne] 3s2 3p2\n");
        printf("\t\t\tGroup                    :                  14\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"P")==0)
    {
        printf("\n\t\t\tName                     :              Phosphorus\n");
        printf("\t\t\tAtomic Number            :                  15\n");
        printf("\t\t\tAtomic Mass              :                  31\n");
        printf("\t\t\tElectronic Configuration :               [Ne] 3s2 3p3\n");
        printf("\t\t\tGroup                    :                  15\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"S")==0)
    {
        printf("\n\t\t\tName                     :               Sulfur\n");
        printf("\t\t\tAtomic Number            :                  16\n");
        printf("\t\t\tAtomic Mass              :                  32\n");
        printf("\t\t\tElectronic Configuration :               [Ne] 3s2 3p4\n");
        printf("\t\t\tGroup                    :                  16\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Cl")==0)
    {
        printf("\n\t\t\tName                     :              Cholorine\n");
        printf("\t\t\tAtomic Number            :                  17\n");
        printf("\t\t\tAtomic Mass              :                  35.5\n");
        printf("\t\t\tElectronic Configuration :               [Ne] 3s2 3p5\n");
        printf("\t\t\tGroup                    :                  7\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Ar")==0)
    {
        printf("\n\t\t\tName                     :               Argon\n");
        printf("\t\t\tAtomic Number            :                  18\n");
        printf("\t\t\tAtomic Mass              :                  40\n");
        printf("\t\t\tElectronic Configuration :               [Ne] 3s2 3p6\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                  3\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"K")==0)
    {
        printf("\n\t\t\tName                     :              Potassium\n");
        printf("\t\t\tAtomic Number            :                  19\n");
        printf("\t\t\tAtomic Mass              :                  39\n");
        printf("\t\t\tElectronic Configuration :               [Ar] 4s1\n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Ca")==0)
    {
        printf("\n\t\t\tName                     :               Calcium\n");
        printf("\t\t\tAtomic Number            :                  20\n");
        printf("\t\t\tAtomic Mass              :                  40\n");
        printf("\t\t\tElectronic Configuration :               [Ar] 4s2\n");
        printf("\t\t\tGroup                    :                  2\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Sc")==0)
    {
        printf("\n\t\t\tName                     :              Scandium\n");
        printf("\t\t\tAtomic Number            :                  21\n");
        printf("\t\t\tAtomic Mass              :                  45\n");
        printf("\t\t\tElectronic Configuration :               [Ar] 3d1 4s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ti")==0)
    {
        printf("\n\t\t\tName                     :              Titanium\n");
        printf("\t\t\tAtomic Number            :                  22\n");
        printf("\t\t\tAtomic Mass              :                  48\n");
        printf("\t\t\tElectronic Configuration :               [Ar] 3d2 4s2\n");
        printf("\t\t\tGroup                    :                  4\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"V")==0)
    {
        printf("\n\t\t\tName                     :              Vanadium\n");
        printf("\t\t\tAtomic Number            :                  23\n");
        printf("\t\t\tAtomic Mass              :                  51\n");
        printf("\t\t\tElectronic Configuration :               [Ar] 3d3 4s2\n");
        printf("\t\t\tGroup                    :                  5\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Cr")==0)
    {
        printf("\n\t\t\tName                     :              Chromium\n");
        printf("\t\t\tAtomic Number            :                  24\n");
        printf("\t\t\tAtomic Mass              :                  52\n");
        printf("\t\t\tElectronic Configuration :               [Ar] 3d4 4s2\n");
        printf("\t\t\tGroup                    :                  6\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Mn")==0)
    {
        printf("\n\t\t\tName                     :              Manganese\n");
        printf("\t\t\tAtomic Number            :                  25\n");
        printf("\t\t\tAtomic Mass              :                  55\n");
        printf("\t\t\tElectronic Configuration :              [Ar] 3d5 4s2\n");
        printf("\t\t\tGroup                    :                  7\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Fe")==0)
    {
        printf("\n\t\t\tName                     :               Iron\n");
        printf("\t\t\tAtomic Number            :                  26\n");
        printf("\t\t\tAtomic Mass              :                  56\n");
        printf("\t\t\tElectronic Configuration :              [Ar] 3d6 4s2\n");
        printf("\t\t\tGroup                    :                  8\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Co")==0)
    {
        printf("\n\t\t\tName                     :               Cobalt\n");
        printf("\t\t\tAtomic Number            :                  27\n");
        printf("\t\t\tAtomic Mass              :                  58\n");
        printf("\t\t\tElectronic Configuration :              [Ar] 3d7 4s2\n");
        printf("\t\t\tGroup                    :                  9\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ni")==0)
    {
        printf("\n\t\t\tName                     :               Nickel\n");
        printf("\t\t\tAtomic Number            :                  28\n");
        printf("\t\t\tAtomic Mass              :                  59\n");
        printf("\t\t\tElectronic Configuration :              [Ar] 3d8 4s2\n");
        printf("\t\t\tGroup                    :                  10\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Cu")==0)
    {
        printf("\n\t\t\tName                     :               Copper\n");
        printf("\t\t\tAtomic Number            :                  29\n");
        printf("\t\t\tAtomic Mass              :                  63.5\n");
        printf("\t\t\tElectronic Configuration :              [Ar] 3d9 4s2\n");
        printf("\t\t\tGroup                    :                  11\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Zn")==0)
    {
        printf("\n\t\t\tName                     :                 Zinc\n");
        printf("\t\t\tAtomic Number            :                  30\n");
        printf("\t\t\tAtomic Mass              :                  65\n");
        printf("\t\t\tElectronic Configuration :              [Ar] 3d10 4s2\n");
        printf("\t\t\tGroup                    :                  12\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ga")==0)
    {
        printf("\n\t\t\tName                     :               Gallium\n");
        printf("\t\t\tAtomic Number            :                  31\n");
        printf("\t\t\tAtomic Mass              :                  70\n");
        printf("\t\t\tElectronic Configuration :           [Ar] 3d10 4s2 4p1\n");
        printf("\t\t\tGroup                    :                  13\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Ge")==0)
    {
        printf("\n\t\t\tName                     :              Germenium\n");
        printf("\t\t\tAtomic Number            :                  32\n");
        printf("\t\t\tAtomic Mass              :                  73\n");
        printf("\t\t\tElectronic Configuration :           [Ar] 3d10 4s2 4p2\n");
        printf("\t\t\tGroup                    :                  14\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"As")==0)
    {
        printf("\n\t\t\tName                     :               Arsenic\n");
        printf("\t\t\tAtomic Number            :                  33\n");
        printf("\t\t\tAtomic Mass              :                  75\n");
        printf("\t\t\tElectronic Configuration :           [Ar] 3d10 4s2 4p3\n");
        printf("\t\t\tGroup                    :                  15\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Se")==0)
    {
        printf("\n\t\t\tName                     :              Selenium\n");
        printf("\t\t\tAtomic Number            :                  34\n");
        printf("\t\t\tAtomic Mass              :                  79\n");
        printf("\t\t\tElectronic Configuration :           [Ar] 3d10 4s2 4p4\n");
        printf("\t\t\tGroup                    :                  16\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Br")==0)
    {
        printf("\n\t\t\tName                     :              Bromine\n");
        printf("\t\t\tAtomic Number            :                  35\n");
        printf("\t\t\tAtomic Mass              :                  80\n");
        printf("\t\t\tElectronic Configuration :            [Ar] 3d10 4s2 4p5\n");
        printf("\t\t\tGroup                    :                  17\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Kr")==0)
    {
        printf("\n\t\t\tName                     :              Krypton\n");
        printf("\t\t\tAtomic Number            :                  36\n");
        printf("\t\t\tAtomic Mass              :                  84\n");
        printf("\t\t\tElectronic Configuration :            [Ar] 3d10 4s2 4p6\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                  4\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Rb")==0)
    {
        printf("\n\t\t\tName                     :              Rubidium\n");
        printf("\t\t\tAtomic Number            :                  37\n");
        printf("\t\t\tAtomic Mass              :                  85.5\n");
        printf("\t\t\tElectronic Configuration :                [Kr] 5s1  \n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Sr")==0)
    {
        printf("\n\t\t\tName                     :              Strontium\n");
        printf("\t\t\tAtomic Number            :                  38\n");
        printf("\t\t\tAtomic Mass              :                  88\n");
        printf("\t\t\tElectronic Configuration :                [Kr] 5s2\n");
        printf("\t\t\tGroup                    :                  2\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Y")==0)
    {
        printf("\n\t\t\tName                     :              Yttrium\n");
        printf("\t\t\tAtomic Number            :                  39\n");
        printf("\t\t\tAtomic Mass              :                  89\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d1 5s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Zr")==0)
    {
        printf("\n\t\t\tName                     :              Zirconium\n");
        printf("\t\t\tAtomic Number            :                  40\n");
        printf("\t\t\tAtomic Mass              :                  91\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d2 5s2\n");
        printf("\t\t\tGroup                    :                  4\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Nb")==0)
    {
        printf("\n\t\t\tName                     :              Niobium\n");
        printf("\t\t\tAtomic Number            :                  41\n");
        printf("\t\t\tAtomic Mass              :                  93\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d3 5s2\n");
        printf("\t\t\tGroup                    :                  5\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Mo")==0)
    {
        printf("\n\t\t\tName                     :              Molybdenum\n");
        printf("\t\t\tAtomic Number            :                  42\n");
        printf("\t\t\tAtomic Mass              :                  96\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d4 5s2\n");
        printf("\t\t\tGroup                    :                  6\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Tc")==0)
    {
        printf("\n\t\t\tName                     :              Technetium\n");
        printf("\t\t\tAtomic Number            :                  43\n");
        printf("\t\t\tAtomic Mass              :                  98\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d5 5s2\n");
        printf("\t\t\tGroup                    :                  7\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ru")==0)
    {
        printf("\n\t\t\tName                     :               Ruthenium\n");
        printf("\t\t\tAtomic Number            :                  44\n");
        printf("\t\t\tAtomic Mass              :                  101\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d6 5s2\n");
        printf("\t\t\tGroup                    :                  8\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Rh")==0)
    {
        printf("\n\t\t\tName                     :               Rhodium\n");
        printf("\t\t\tAtomic Number            :                  45\n");
        printf("\t\t\tAtomic Mass              :                  103\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d7 5s2\n");
        printf("\t\t\tGroup                    :                  9\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Pd")==0)
    {
        printf("\n\t\t\tName                     :               Palladium\n");
        printf("\t\t\tAtomic Number            :                  46\n");
        printf("\t\t\tAtomic Mass              :                  106\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d8 5s2\n");
        printf("\t\t\tGroup                    :                  10\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ag")==0)
    {
        printf("\n\t\t\tName                     :               Silver\n");
        printf("\t\t\tAtomic Number            :                  47\n");
        printf("\t\t\tAtomic Mass              :                  108\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d9 5s2\n");
        printf("\t\t\tGroup                    :                  11\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Cd")==0)
    {
        printf("\n\t\t\tName                     :               Cadmium\n");
        printf("\t\t\tAtomic Number            :                  48\n");
        printf("\t\t\tAtomic Mass              :                  112\n");
        printf("\t\t\tElectronic Configuration :              [Kr] 4d10 5s2\n");
        printf("\t\t\tGroup                    :                  12\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"In")==0)
    {
        printf("\n\t\t\tName                     :               Indium\n");
        printf("\t\t\tAtomic Number            :                  49\n");
        printf("\t\t\tAtomic Mass              :                  115\n");
        printf("\t\t\tElectronic Configuration :            [Kr] 4d10 5s2 5p1\n");
        printf("\t\t\tGroup                    :                  13\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Sn")==0)
    {
        printf("\n\t\t\tName                     :                Tin\n");
        printf("\t\t\tAtomic Number            :                  50\n");
        printf("\t\t\tAtomic Mass              :                  119\n");
        printf("\t\t\tElectronic Configuration :            [Kr] 4d10 5s2 5p2\n");
        printf("\t\t\tGroup                    :                  14\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Sb")==0)
    {
        printf("\n\t\t\tName                     :               Antimony\n");
        printf("\t\t\tAtomic Number            :                  51\n");
        printf("\t\t\tAtomic Mass              :                  122\n");
        printf("\t\t\tElectronic Configuration :            [Kr] 4d10 5s2 5p3\n");
        printf("\t\t\tGroup                    :                  15\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Te")==0)
    {
        printf("\n\t\t\tName                     :               Tellurium\n");
        printf("\t\t\tAtomic Number            :                  52\n");
        printf("\t\t\tAtomic Mass              :                  128\n");
        printf("\t\t\tElectronic Configuration :            [Kr] 4d10 5s2 5p4\n");
        printf("\t\t\tGroup                    :                  16\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"I")==0)
    {
        printf("\n\t\t\tName                     :               Iodine\n");
        printf("\t\t\tAtomic Number            :                  53\n");
        printf("\t\t\tAtomic Mass              :                  127\n");
        printf("\t\t\tElectronic Configuration :            [Kr] 4d10 5s2 5p5\n");
        printf("\t\t\tGroup                    :                  17\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Xe")==0)
    {
        printf("\n\t\t\tName                     :               Xenon\n");
        printf("\t\t\tAtomic Number            :                  54\n");
        printf("\t\t\tAtomic Mass              :                  131\n");
        printf("\t\t\tElectronic Configuration :            [Kr] 4d10 5s2 5p6\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                  5\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Cs")==0)
    {
        printf("\n\t\t\tName                     :               Caesium\n");
        printf("\t\t\tAtomic Number            :                  55\n");
        printf("\t\t\tAtomic Mass              :                  133\n");
        printf("\t\t\tElectronic Configuration :               [Xe] 6s1\n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Ba")==0)
    {
        printf("\n\t\t\tName                     :               Barium\n");
        printf("\t\t\tAtomic Number            :                  56\n");
        printf("\t\t\tAtomic Mass              :                  137\n");
        printf("\t\t\tElectronic Configuration :               [Xe] 6s2\n");
        printf("\t\t\tGroup                    :                  2\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"La")==0)
    {
        printf("\n\t\t\tName                     :              Lanthanum\n");
        printf("\t\t\tAtomic Number            :                  57\n");
        printf("\t\t\tAtomic Mass              :                  139\n");
        printf("\t\t\tElectronic Configuration :              [Xe] 5d1 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Ce")==0)
    {
        printf("\n\t\t\tName                     :               Cerium\n");
        printf("\t\t\tAtomic Number            :                  58\n");
        printf("\t\t\tAtomic Mass              :                  140\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f2 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Pr")==0)
    {
        printf("\n\t\t\tName                     :              Praseodymium\n");
        printf("\t\t\tAtomic Number            :                  59\n");
        printf("\t\t\tAtomic Mass              :                  141\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f3 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Nd")==0)
    {
        printf("\n\t\t\tName                     :              Neodymium\n");
        printf("\t\t\tAtomic Number            :                  60\n");
        printf("\t\t\tAtomic Mass              :                  144\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f4 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Pm")==0)
    {
        printf("\n\t\t\tName                     :              Promethium\n");
        printf("\t\t\tAtomic Number            :                  61\n");
        printf("\t\t\tAtomic Mass              :                  145\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f5 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Sm")==0)
    {
        printf("\n\t\t\tName                     :              Samarium\n");
        printf("\t\t\tAtomic Number            :                  62\n");
        printf("\t\t\tAtomic Mass              :                  150\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f6 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Eu")==0)
    {
        printf("\n\t\t\tName                     :              Europium\n");
        printf("\t\t\tAtomic Number            :                  63\n");
        printf("\t\t\tAtomic Mass              :                  152\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f7 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Gd")==0)
    {
        printf("\n\t\t\tName                     :              Gadolinium\n");
        printf("\t\t\tAtomic Number            :                  64\n");
        printf("\t\t\tAtomic Mass              :                  157\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f8 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Tb")==0)
    {
        printf("\n\t\t\tName                     :               Terbium\n");
        printf("\t\t\tAtomic Number            :                  65\n");
        printf("\t\t\tAtomic Mass              :                  159\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f9 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Dy")==0)
    {
        printf("\n\t\t\tName                     :              Dysprosium\n");
        printf("\t\t\tAtomic Number            :                  66\n");
        printf("\t\t\tAtomic Mass              :                  163\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f10 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Ho")==0)
    {
        printf("\n\t\t\tName                     :               Holmium\n");
        printf("\t\t\tAtomic Number            :                  67\n");
        printf("\t\t\tAtomic Mass              :                  165\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f11 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Er")==0)
    {
        printf("\n\t\t\tName                     :               Erbium\n");
        printf("\t\t\tAtomic Number            :                  68\n");
        printf("\t\t\tAtomic Mass              :                  167\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f12 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Tm")==0)
    {
        printf("\n\t\t\tName                     :               Thulium\n");
        printf("\t\t\tAtomic Number            :                  69\n");
        printf("\t\t\tAtomic Mass              :                  169\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f13 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Yb")==0)
    {
        printf("\n\t\t\tName                     :              Ytterbium\n");
        printf("\t\t\tAtomic Number            :                  70\n");
        printf("\t\t\tAtomic Mass              :                  173\n");
        printf("\t\t\tElectronic Configuration :             [Xe] 4f14 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Lu")==0)
    {
        printf("\n\t\t\tName                     :              Lutetium\n");
        printf("\t\t\tAtomic Number            :                  71\n");
        printf("\t\t\tAtomic Mass              :                  175\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d1 6s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t              ***Lanthanide Series***        \n");
    }

    if(strcmp(n,"Hf")==0)
    {
        printf("\n\t\t\tName                     :              Hafnium\n");
        printf("\t\t\tAtomic Number            :                  72\n");
        printf("\t\t\tAtomic Mass              :                  178.5\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d2 6s2\n");
        printf("\t\t\tGroup                    :                  4\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ta")==0)
    {
        printf("\n\t\t\tName                     :              Tantalum\n");
        printf("\t\t\tAtomic Number            :                  73\n");
        printf("\t\t\tAtomic Mass              :                  181\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d3 6s2\n");
        printf("\t\t\tGroup                    :                  5\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"W")==0)
    {
        printf("\n\t\t\tName                     :              Tungsten\n");
        printf("\t\t\tAtomic Number            :                  74\n");
        printf("\t\t\tAtomic Mass              :                  184\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d4 6s2\n");
        printf("\t\t\tGroup                    :                  6\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Re")==0)
    {
        printf("\n\t\t\tName                     :              Rhenium\n");
        printf("\t\t\tAtomic Number            :                  75\n");
        printf("\t\t\tAtomic Mass              :                  186\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d5 6s2\n");
        printf("\t\t\tGroup                    :                  7\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Os")==0)
    {
        printf("\n\t\t\tName                     :               Osmium\n");
        printf("\t\t\tAtomic Number            :                  76\n");
        printf("\t\t\tAtomic Mass              :                  190\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d6 6s2\n");
        printf("\t\t\tGroup                    :                  8\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ir")==0)
    {
        printf("\n\t\t\tName                     :              Iridium\n");
        printf("\t\t\tAtomic Number            :                  77\n");
        printf("\t\t\tAtomic Mass              :                  192\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d7 6s2\n");
        printf("\t\t\tGroup                    :                  9\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Pt")==0)
    {
        printf("\n\t\t\tName                     :              Platinum\n");
        printf("\t\t\tAtomic Number            :                  78\n");
        printf("\t\t\tAtomic Mass              :                  195\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d9 6s1\n");
        printf("\t\t\tGroup                    :                  10\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Au")==0)
    {
        printf("\n\t\t\tName                     :               Gold\n");
        printf("\t\t\tAtomic Number            :                  79\n");
        printf("\t\t\tAtomic Mass              :                  197\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d10 6s1\n");
        printf("\t\t\tGroup                    :                  11\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Hg")==0)
    {
        printf("\n\t\t\tName                     :              Mercury\n");
        printf("\t\t\tAtomic Number            :                  80\n");
        printf("\t\t\tAtomic Mass              :                  201\n");
        printf("\t\t\tElectronic Configuration :           [Xe] 4f14 5d10 6s2\n");
        printf("\t\t\tGroup                    :                  12\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Tl")==0)
    {
        printf("\n\t\t\tName                     :              Thallium\n");
        printf("\t\t\tAtomic Number            :                  81\n");
        printf("\t\t\tAtomic Mass              :                  204\n");
        printf("\t\t\tElectronic Configuration :         [Xe] 4f14 5d10 6s2 6p1\n");
        printf("\t\t\tGroup                    :                  13\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Pb")==0)
    {
        printf("\n\t\t\tName                     :               Lead\n");
        printf("\t\t\tAtomic Number            :                  82\n");
        printf("\t\t\tAtomic Mass              :                  207\n");
        printf("\t\t\tElectronic Configuration :         [Xe] 4f14 5d10 6s2 6p2\n");
        printf("\t\t\tGroup                    :                  14\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Bi")==0)
    {
        printf("\n\t\t\tName                     :              Bismuth\n");
        printf("\t\t\tAtomic Number            :                  83\n");
        printf("\t\t\tAtomic Mass              :                  209\n");
        printf("\t\t\tElectronic Configuration :         [Xe] 4f14 5d10 6s2 6p3\n");
        printf("\t\t\tGroup                    :                  15\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Po")==0)
    {
        printf("\n\t\t\tName                     :              Polonium\n");
        printf("\t\t\tAtomic Number            :                  84\n");
        printf("\t\t\tAtomic Mass              :                  209\n");
        printf("\t\t\tElectronic Configuration :        [Xe] 4f14 5d10 6s2 6p4\n");
        printf("\t\t\tGroup                    :                  16\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"At")==0)
    {
        printf("\n\t\t\tName                     :              Astatine\n");
        printf("\t\t\tAtomic Number            :                  85\n");
        printf("\t\t\tAtomic Mass              :                  210\n");
        printf("\t\t\tElectronic Configuration :        [Xe] 4f14 5d10 6s2 6p5\n");
        printf("\t\t\tGroup                    :                  17\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Rn")==0)
    {
        printf("\n\t\t\tName                     :               Radon\n");
        printf("\t\t\tAtomic Number            :                  86\n");
        printf("\t\t\tAtomic Mass              :                  222\n");
        printf("\t\t\tElectronic Configuration :        [Xe] 4f14 5d10 6s2 6p6\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                  6\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Fr")==0)
    {
        printf("\n\t\t\tName                     :              Francium\n");
        printf("\t\t\tAtomic Number            :                  87\n");
        printf("\t\t\tAtomic Mass              :                  223\n");
        printf("\t\t\tElectronic Configuration :                [Rn] 7s1\n");
        printf("\t\t\tGroup                    :                  1\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Ra")==0)
    {
        printf("\n\t\t\tName                     :              Radium\n");
        printf("\t\t\tAtomic Number            :                  88\n");
        printf("\t\t\tAtomic Mass              :                  226\n");
        printf("\t\t\tElectronic Configuration :                 [Rn] 7s2\n");
        printf("\t\t\tGroup                    :                  2\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  s\n");
    }

    if(strcmp(n,"Ac")==0)
    {
        printf("\n\t\t\tName                     :              Actinium\n");
        printf("\t\t\tAtomic Number            :                  89\n");
        printf("\t\t\tAtomic Mass              :                  227\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 6d1 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Th")==0)
    {
        printf("\n\t\t\tName                     :              Thorium\n");
        printf("\t\t\tAtomic Number            :                  90\n");
        printf("\t\t\tAtomic Mass              :                  232\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 6d2 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Pa")==0)
    {
        printf("\n\t\t\tName                     :              Protactinium\n");
        printf("\t\t\tAtomic Number            :                  91\n");
        printf("\t\t\tAtomic Mass              :                  231\n");
        printf("\t\t\tElectronic Configuration :            [Rn] 5f2 6d1 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"U")==0)
    {
        printf("\n\t\t\tName                     :              Uranium\n");
        printf("\t\t\tAtomic Number            :                  92\n");
        printf("\t\t\tAtomic Mass              :                  238\n");
        printf("\t\t\tElectronic Configuration :            [Rn] 5f3 6d1 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Np")==0)
    {
        printf("\n\t\t\tName                     :              Neptunium\n");
        printf("\t\t\tAtomic Number            :                  93\n");
        printf("\t\t\tAtomic Mass              :                  237\n");
        printf("\t\t\tElectronic Configuration :            [Rn] 5f4 6d1 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Pu")==0)
    {
        printf("\n\t\t\tName                     :              Plutonium\n");
        printf("\t\t\tAtomic Number            :                  94\n");
        printf("\t\t\tAtomic Mass              :                  244\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f6 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Am")==0)
    {
        printf("\n\t\t\tName                     :             Americium\n");
        printf("\t\t\tAtomic Number            :                  95\n");
        printf("\t\t\tAtomic Mass              :                  243\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f7 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Cm")==0)
    {
        printf("\n\t\t\tName                     :              Curium\n");
        printf("\t\t\tAtomic Number            :                  96\n");
        printf("\t\t\tAtomic Mass              :                  247\n");
        printf("\t\t\tElectronic Configuration :            [Rn] 5f7 6d1 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Bk")==0)
    {
        printf("\n\t\t\tName                     :             Berkelium\n");
        printf("\t\t\tAtomic Number            :                  97\n");
        printf("\t\t\tAtomic Mass              :                  247\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f9 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Cf")==0)
    {
        printf("\n\t\t\tName                     :             Californium\n");
        printf("\t\t\tAtomic Number            :                  98\n");
        printf("\t\t\tAtomic Mass              :                  251\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f10 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Es")==0)
    {
        printf("\n\t\t\tName                     :              Einsteinium\n");
        printf("\t\t\tAtomic Number            :                  99\n");
        printf("\t\t\tAtomic Mass              :                  252\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f11 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Fm")==0)
    {
        printf("\n\t\t\tName                     :               Fermium\n");
        printf("\t\t\tAtomic Number            :                  100\n");
        printf("\t\t\tAtomic Mass              :                  257\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f12 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Md")==0)
    {
        printf("\n\t\t\tName                     :              Mendelevium\n");
        printf("\t\t\tAtomic Number            :                  101\n");
        printf("\t\t\tAtomic Mass              :                  258\n");
        printf("\t\t\tElectronic Configuration :              [Rn] 5f13 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"No")==0)
    {
        printf("\n\t\t\tName                     :              Nobelium\n");
        printf("\t\t\tAtomic Number            :                  102\n");
        printf("\t\t\tAtomic Mass              :                  259\n");
        printf("\t\t\tElectronic Configuration :             [Rn] 5f14 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Lr")==0)
    {
        printf("\n\t\t\tName                     :              Lawrencium\n");
        printf("\t\t\tAtomic Number            :                  103\n");
        printf("\t\t\tAtomic Mass              :                  262\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d1 7s2\n");
        printf("\t\t\tGroup                    :                  3\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
        printf("\t\t\t               ***Actinide Series***         \n");
    }

    if(strcmp(n,"Rf")==0)
    {
        printf("\n\t\t\tName                     :              Rutherfordium\n");
        printf("\t\t\tAtomic Number            :                  104\n");
        printf("\t\t\tAtomic Mass              :                  261\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d2 7s2\n");
        printf("\t\t\tGroup                    :                  4\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Db")==0)
    {
        printf("\n\t\t\tName                     :              Dubnium\n");
        printf("\t\t\tAtomic Number            :                  105\n");
        printf("\t\t\tAtomic Mass              :                  262\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d3 7s2\n");
        printf("\t\t\tGroup                    :                  5\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Sg")==0)
    {
        printf("\n\t\t\tName                     :              Seaborgium\n");
        printf("\t\t\tAtomic Number            :                  106\n");
        printf("\t\t\tAtomic Mass              :                  263\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d4 7s2\n");
        printf("\t\t\tGroup                    :                  6\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Bh")==0)
    {
        printf("\n\t\t\tName                     :              Bohrium\n");
        printf("\t\t\tAtomic Number            :                  107\n");
        printf("\t\t\tAtomic Mass              :                  262\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d5 7s2\n");
        printf("\t\t\tGroup                    :                  7\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Hs")==0)
    {
        printf("\n\t\t\tName                     :              Hassium\n");
        printf("\t\t\tAtomic Number            :                  108\n");
        printf("\t\t\tAtomic Mass              :                  265\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d6 7s2\n");
        printf("\t\t\tGroup                    :                  8\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Mt")==0)
    {
        printf("\n\t\t\tName                     :             Metrenium\n");
        printf("\t\t\tAtomic Number            :                  109\n");
        printf("\t\t\tAtomic Mass              :                  266\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d7 7s2\n");
        printf("\t\t\tGroup                    :                  9\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Ds")==0)
    {
        printf("\n\t\t\tName                     :             Darmstadium\n");
        printf("\t\t\tAtomic Number            :                  110\n");
        printf("\t\t\tAtomic Mass              :                  269\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d9 7s2\n");
        printf("\t\t\tGroup                    :                  10\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Rg")==0)
    {
        printf("\n\t\t\tName                     :              Roentgenium\n");
        printf("\t\t\tAtomic Number            :                  111\n");
        printf("\t\t\tAtomic Mass              :                  272\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d10 7s1\n");
        printf("\t\t\tGroup                    :                  11\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Cn")==0)
    {
        printf("\n\t\t\tName                     :              Copernicium\n");
        printf("\t\t\tAtomic Number            :                  112\n");
        printf("\t\t\tAtomic Mass              :                  285\n");
        printf("\t\t\tElectronic Configuration :           [Rn] 5f14 6d10 7s2\n");
        printf("\t\t\tGroup                    :                  12\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  d\n");
    }

    if(strcmp(n,"Nh")==0)
    {
        printf("\n\t\t\tName                     :              Nihonium\n");
        printf("\t\t\tAtomic Number            :                  113\n");
        printf("\t\t\tAtomic Mass              :                  284\n");
        printf("\t\t\tElectronic Configuration :         [Rn] 5f14 6d10 7s2 7p1\n");
        printf("\t\t\tGroup                    :                  13\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Fl")==0)
    {
        printf("\n\t\t\tName                     :              Flerovium\n");
        printf("\t\t\tAtomic Number            :                  114\n");
        printf("\t\t\tAtomic Mass              :                  285\n");
        printf("\t\t\tElectronic Configuration :         [Rn] 5f14 6d10 7s2 7p2\n");
        printf("\t\t\tGroup                    :                  14\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Mc")==0)
    {
        printf("\n\t\t\tName                     :              Moscovium\n");
        printf("\t\t\tAtomic Number            :                  115\n");
        printf("\t\t\tAtomic Mass              :                  288\n");
        printf("\t\t\tElectronic Configuration :         [Rn] 5f14 6d10 7s2 7p3\n");
        printf("\t\t\tGroup                    :                  15\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Lv")==0)
    {
        printf("\n\t\t\tName                     :              Livermorium\n");
        printf("\t\t\tAtomic Number            :                  116\n");
        printf("\t\t\tAtomic Mass              :                  293\n");
        printf("\t\t\tElectronic Configuration :         [Rn] 5f14 6d10 7s2 7p4\n");
        printf("\t\t\tGroup                    :                  16\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Ts")==0)
    {
        printf("\n\t\t\tName                     :              Tennessine\n");
        printf("\t\t\tAtomic Number            :                  117\n");
        printf("\t\t\tAtomic Mass              :                  294\n");
        printf("\t\t\tElectronic Configuration :         [Rn] 5f14 6d10 7s2 7p5\n");
        printf("\t\t\tGroup                    :                  17\n");
        printf("\t\t\tPeriod                   :                  7\n");
        printf("\t\t\tBlock                    :                  p\n");
    }

    if(strcmp(n,"Og")==0)
    {
        printf("\n\t\t\tName                     :               Oganesson\n");
        printf("\t\t\tAtomic Number            :                  118\n");
        printf("\t\t\tAtomic Mass              :                  294\n");
        printf("\t\t\tElectronic Configuration :         [Rn] 5f14 6d10 7s2 7p6\n");
        printf("\t\t\tGroup                    :                  18\n");
        printf("\t\t\tPeriod                   :                   7\n");
        printf("\t\t\tBlock                    :                   p\n");
    }

    printf("\nDo you want to continue (Y or N)? => ");
    gets(c);
    printf("\n");

    if(strcmp(c,"Yes")==0)
    {
        return main();
    }

    else
    {
        printf("Thank You for using THE MODERN PERIODIC TABLE\n\n");
        printf("\t\t#Stay_Home\n");
        printf("\t\t#Stay_Safe\n");

        Sleep(2000);

        return EXIT_SUCCESS;
    }

}
