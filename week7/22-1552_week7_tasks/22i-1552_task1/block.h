#ifndef BLOCK_H_
#define BLOCK_H_



class Block
{
    private:
        float length;
        float width;
        float height;
        char *material;
        char *color;
        float volume;
        float surface_area;
        static int countofblocks;
        

    public:
       // int static countofBlocks;

        Block();
        Block(float l,float w,float h,char *m,char *c,float v,float s);

        void setdata();
        float getvolume();
        float getsurfacearea();
        float print();
        static int getcount();
};






#endif