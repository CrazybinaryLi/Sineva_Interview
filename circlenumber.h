#ifndef CIRCLENUMBER_H
#define CIRCLENUMBER_H

int* sort(int* a, const int len_a, int* b, const int len_b);

class circlenumber
{
public:
    circlenumber(int loop);
    void print();

private:
    void fool(int min, int start_x, int start_y, int current_loop_length, int current_loop_width);
    void next(int current_x, int current_y, int index, int current_loop_width, int* n_x, int* n_y);
    int loop, start_x, start_y, center_x, center_y, min, current_loop_length, current_loop_width;
    int ncn[100][100];
};

#endif // CIRCLENUMBER_H
