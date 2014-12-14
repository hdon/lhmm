#ifndef __HASH_H__
#define __HASH_H__
class SpellHasher
{
    public:
        SpellHasher (const char * Salt = "");
        ~SpellHasher () {};
        unsigned long int Hash (const char * spell);
    private:
        unsigned long int hashedsalt;
};
#endif
