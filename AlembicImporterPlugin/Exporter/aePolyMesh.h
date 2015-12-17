#ifndef aePolyMesh_h
#define aePolyMesh_h

struct aePolyMeshSampleData
{
};

class aePolyMesh : public aeSchemaBase
{
typedef aeSchemaBase super;
public:
    aePolyMesh(aeObject *obj);
    void writeSample(const aePolyMeshSampleData &data);

private:
    AbcGeom::OPolyMesh m_abcobj;
    AbcGeom::OPolyMeshSchema m_schema;
};


#endif // aePolyMesh_h
