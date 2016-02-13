//
// Created by yzy on 12/16/2015.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <vector>

using std::vector;

namespace __Matrix
{
    template<typename T>
    class Matrix
    {
    public:
        Matrix(int Rows, int Columns)
        {
            nRow = Rows;
            nColumn = Columns;

            Content.resize(Rows);
            for(auto& v : Content)
            {
                v.resize(Columns);
            }
        }

        Matrix()
        {
            Content.clear();
        }

        Matrix(const Matrix<T>& M);
        Matrix(Matrix<T>&& M);

        int GetRank() const;
        int GetDetermination() const;

        bool SetRow(unsigned int Row, vector<T> RowContent);
        bool SetColumn(unsigned int Column, vector<T> ColumnContent);

        bool SetRow(unsigned int Row, T RowContent[]);
        bool SetColumn(unsigned int Column, T ColumnContent[]);

        unsigned int GetRows() const {return nRow;}
        unsigned int GetColumns() const { return nColumn;}

        T* GetRow(unsigned int Row);
        T* GetColumn(unsigned int Column);

        vector<T> GetRowAsVector(unsigned int Row);
        vector<T> GetColumnAsVector(unsigned int Column);

        bool ResizeRows(unsigned int Rows);
        bool ResizeColumns(unsigned int Columns);

    private:
        vector<vector <T>> Content;
        unsigned int nRow;
        unsigned int nColumn;
    };
}


#endif //MATRIX_MATRIX_H
