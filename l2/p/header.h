#ifndef header_h
#define header_h


struct student {
    int nr ;
    char* nume;
    char gen;
    float nota;
    void Read();
    void Write();

};

void student::Read();
void student::Write();

#endif