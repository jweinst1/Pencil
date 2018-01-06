#ifndef LANG_PATTERN_HEAD
#define LANG_PATTERN_HEAD

struct LangEntity
{
        enum Type
        {
                Object,
                Action,
                Descript
        };
};

// A language pattern is a unique sequence of language entities, such as objects or actions.
// Sometimes, entities can be connected in different ways, like "Apples, oranges"
struct LangPattern
{
        enum Type
        {
                Obj_Obj,
                Obj_Con_Obj
        }
};

#endif
