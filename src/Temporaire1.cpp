#include "Temporaire1.h"

vector<string>tableau1;
vector<string>tableau2;
vector<string>tableau3;
vector<string>tableau4;
vector<string>tableau5;

MYSQL* conn;


void Temporaire1::liste1(){

    m="Paris";
        d="Bordeaux";
         while(d!=m)

        {



        qstate = "SELECT * FROM routefr WHERE ville_A ='"+d+"' order by rand() limit 1";
        mysql_query(conn,qstate.c_str());
        res = mysql_store_result(conn);
        row=mysql_fetch_row(res);


        a=row[0];
        b=row[1];
        c=row[2];
        d=row[3];
        e=row[9];



        qstate1 = "INSERT INTO temporaire1 (id, ville_A, Route, ville_B,fitness) VALUES ('"+a+"','"+b+"','"+c+"','"+d+"','"+e+"')";
        mysql_query(conn,qstate1.c_str());


        f = a  + " " + b + " " + c + " " + d +" "+ e;
        tableau1.push_back(f);

        str10 = mysql_query(conn,"DELETE FROM temporaire1");
        res10 = mysql_use_result(conn);





  }

}

void Temporaire1::affichage(){

    cout<<"----------------------------"<<endl;
    for (int n = 0 ; n < tableau1.size() ; n++){

        cout << tableau1[n]<<endl;
                    }
    cout<<"----------------------------"<<endl;
    for (int n = 0 ; n < tableau2.size() ; n++){

        cout << tableau2[n]<<endl;
                    }
    cout<<"----------------------------"<<endl;
    for (int n = 0 ; n < tableau3.size() ; n++){

        cout << tableau3[n]<<endl;
                    }
    cout<<"----------------------------"<<endl;
    for (int n = 0 ; n < tableau4.size() ; n++){

        cout << tableau4[n]<<endl;
                    }
    cout<<"----------------------------"<<endl;
     for (int n = 0 ; n < tableau5.size() ; n++){

        cout << tableau5[n]<<endl;
                    }
    cout<<"----------------------------"<<endl;
}


void Temporaire1::connection(){

        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "localhost", "root", "", "gps", 0, NULL, 0);


         if (conn)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


}

void Temporaire1::liste2(){

    m="Paris";
        d="Bordeaux";
         while(d!=m)

        {



        qstate2 = "SELECT * FROM routefr WHERE ville_A ='"+d+"' order by rand() limit 1";
        mysql_query(conn,qstate2.c_str());
        res2 = mysql_store_result(conn);
        row2=mysql_fetch_row(res2);


        a=row2[0];
        b=row2[1];
        c=row2[2];
        d=row2[3];
        e=row2[9];



        qstate3 = "INSERT INTO temporaire1 (id, ville_A, Route, ville_B,fitness) VALUES ('"+a+"','"+b+"','"+c+"','"+d+"','"+e+"')";
        mysql_query(conn,qstate3.c_str());


        f = a  + " " + b + " " + c + " " + d +" "+ e;
        tableau2.push_back(f);

        str11 = mysql_query(conn,"DELETE FROM temporaire1");
        res11 = mysql_use_result(conn);





  }
}

void Temporaire1::liste3(){

        m="Paris";
        d="Bordeaux";
         while(d!=m)

        {



        qstate4 = "SELECT * FROM routefr WHERE ville_A ='"+d+"' order by rand() limit 1";
        mysql_query(conn,qstate4.c_str());
        res3 = mysql_store_result(conn);
        row3=mysql_fetch_row(res3);


        a=row3[0];
        b=row3[1];
        c=row3[2];
        d=row3[3];
        e=row3[9];



        qstate5 = "INSERT INTO temporaire1 (id, ville_A, Route, ville_B,fitness) VALUES ('"+a+"','"+b+"','"+c+"','"+d+"','"+e+"')";
        mysql_query(conn,qstate5.c_str());


        f = a  + " " + b + " " + c + " " + d +" "+ e;
        tableau3.push_back(f);

        str12 = mysql_query(conn,"DELETE FROM temporaire1");
        res12 = mysql_use_result(conn);





  }




















}

void Temporaire1::liste4(){

        m="Paris";
        d="Bordeaux";
         while(d!=m)

        {



        qstate5 = "SELECT * FROM routefr WHERE ville_A ='"+d+"' order by rand() limit 1";
        mysql_query(conn,qstate5.c_str());
        res4 = mysql_store_result(conn);
        row4=mysql_fetch_row(res4);


        a=row4[0];
        b=row4[1];
        c=row4[2];
        d=row4[3];
        e=row4[9];



        qstate6 = "INSERT INTO temporaire1 (id, ville_A, Route, ville_B,fitness) VALUES ('"+a+"','"+b+"','"+c+"','"+d+"','"+e+"')";
        mysql_query(conn,qstate6.c_str());


        f = a  + " " + b + " " + c + " " + d +" "+ e;
        tableau4.push_back(f);

        str13 = mysql_query(conn,"DELETE FROM temporaire1");
        res14 = mysql_use_result(conn);





  }
















}

void Temporaire1::liste5(){

    m="Paris";
        d="Bordeaux";
         while(d!=m)

        {


        qstate7 = "SELECT * FROM routefr WHERE ville_A ='"+d+"' order by rand() limit 1";
        mysql_query(conn,qstate7.c_str());
        res5 = mysql_store_result(conn);
        row5=mysql_fetch_row(res5);


        a=row5[0];
        b=row5[1];
        c=row5[2];
        d=row5[3];
        e=row5[9];



        qstate8 = "INSERT INTO temporaire5 (id, ville_A, Route, ville_B,fitness) VALUES ('"+a+"','"+b+"','"+c+"','"+d+"','"+e+"')";
        mysql_query(conn,qstate8.c_str());


        f = a  + " " + b + " " + c + " " + d +" "+ e;
        tableau5.push_back(f);

        str14 = mysql_query(conn,"DELETE FROM temporaire5");
        res15 = mysql_use_result(conn);





  }
}



