#ifndef TEMPORAIRE1_H
#define TEMPORAIRE1_H
#include <mysql.h>
#include <vector>
#include <iostream>
#include <windows.h>
using namespace std;


class Temporaire1
{

private:

    MYSQL_ROW row;
    MYSQL_ROW row2;
    MYSQL_ROW row3;
    MYSQL_ROW row4;
    MYSQL_ROW row5;

    MYSQL_RES* res;
    MYSQL_RES* res2;
    MYSQL_RES* res3;
    MYSQL_RES* res4;
    MYSQL_RES* res5;

    MYSQL_RES* res10;
    MYSQL_RES* res11;
    MYSQL_RES* res12;
    MYSQL_RES* res13;
    MYSQL_RES* res14;
    MYSQL_RES* res15;



public:

    string m,a,b,c,d,e,f;
    string qstate, qstate1, qstate2, qstate3, qstate4,qstate5,qstate6,qstate7,qstate8;
    string str10,str11,str12,str13,str14;
    void liste1();
    void liste2();
    void liste3();
    void liste4();
    void liste5();
    void affichage();
    void connection();



};

#endif // TEMPORAIRE1_H
