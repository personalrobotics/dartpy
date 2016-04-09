#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics16LineSegmentShapeE_docstring[] = R"CHIMERA_STRING( The LineSegmentShape facilitates creating graphs of line segments. The graph
 can consist of a single line segment or many interconnected line segments.
 Note: LineSegmentShape may NOT be used as a collision shape for BodyNodes,
 but it may be used for visualization purposes.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape12setThicknessEf_docstring[] = R"CHIMERA_STRING( Set the line thickness/width for rendering
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics16LineSegmentShape12getThicknessEv_docstring[] = R"CHIMERA_STRING( Get the line thickness/width used for rendering
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape9addVertexERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Add a vertex as a child to the last vertex that was added
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape9addVertexERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEm_docstring[] = R"CHIMERA_STRING( Add a vertex as a child to the specified vertex
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape12removeVertexEm_docstring[] = R"CHIMERA_STRING( Remove a vertex from the list of vertices. IMPORTANT: Note that this
 alters the indices of all vertices that follow it in the list, which also
 clobbers the validity of the list of connections for all those vertices.
 A safer and more efficient method might be to recycle vertices by moving
 them around with setVertex() and/or altering their connections.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape9setVertexEmRKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the location of the specified vertex
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics16LineSegmentShape9getVertexEm_docstring[] = R"CHIMERA_STRING( Get the location of the specified vertex. Returns a zero vector if an
 out-of-bounds vertex is requested.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics16LineSegmentShape11getVerticesEv_docstring[] = R"CHIMERA_STRING( Get all the vertices
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape13addConnectionEmm_docstring[] = R"CHIMERA_STRING( Create a connection between the two specified vertices
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape16removeConnectionEmm_docstring[] = R"CHIMERA_STRING( Search for a connection between two vertices and break it if it exists.
 This is less efficient but more robust than removeConnection(size_t).
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics16LineSegmentShape16removeConnectionEm_docstring[] = R"CHIMERA_STRING( Remove the specified connection entry. Note that this will impact the
 indices of all connections that come after _connectionIdx. This is more
 efficient but less robust than removeConnection(size_t,size_t)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics16LineSegmentShape14getConnectionsEv_docstring[] = R"CHIMERA_STRING( Get all the connections
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics16LineSegmentShape14computeInertiaEd_docstring[] = R"CHIMERA_STRING( The returned inertia matrix will be like a very thin cylinder. The _mass
 will be evenly distributed across all lines.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics16LineSegmentShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::LineSegmentShape, std::shared_ptr<dart::dynamics::LineSegmentShape>, ::boost::python::bases<dart::dynamics::Shape > >("LineSegmentShape", _ZN4dart8dynamics16LineSegmentShapeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](float _thickness) -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(_thickness); }, ::boost::python::default_call_policies(), (::boost::python::arg("_thickness"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _v1, const Eigen::Vector3d & _v2) -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(_v1, _v2); }, ::boost::python::default_call_policies(), (::boost::python::arg("_v1"), ::boost::python::arg("_v2"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _v1, const Eigen::Vector3d & _v2, float _thickness) -> dart::dynamics::LineSegmentShape * { return new dart::dynamics::LineSegmentShape(_v1, _v2, _thickness); }, ::boost::python::default_call_policies(), (::boost::python::arg("_v1"), ::boost::python::arg("_v2"), ::boost::python::arg("_thickness"))))
.def("setThickness", [](dart::dynamics::LineSegmentShape *self, float _thickness) -> void { return self->setThickness(_thickness); }, _ZN4dart8dynamics16LineSegmentShape12setThicknessEf_docstring, (::boost::python::arg("_thickness")))
.def("getThickness", [](const dart::dynamics::LineSegmentShape *self) -> float { return self->getThickness(); }, _ZNK4dart8dynamics16LineSegmentShape12getThicknessEv_docstring)
.def("addVertex", [](dart::dynamics::LineSegmentShape *self, const Eigen::Vector3d & _v) -> std::size_t { return self->addVertex(_v); }, _ZN4dart8dynamics16LineSegmentShape9addVertexERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_v")))
.def("addVertex", [](dart::dynamics::LineSegmentShape *self, const Eigen::Vector3d & _v, std::size_t _parent) -> std::size_t { return self->addVertex(_v, _parent); }, _ZN4dart8dynamics16LineSegmentShape9addVertexERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEm_docstring, (::boost::python::arg("_v"), ::boost::python::arg("_parent")))
.def("removeVertex", [](dart::dynamics::LineSegmentShape *self, std::size_t _idx) -> void { return self->removeVertex(_idx); }, _ZN4dart8dynamics16LineSegmentShape12removeVertexEm_docstring, (::boost::python::arg("_idx")))
.def("setVertex", [](dart::dynamics::LineSegmentShape *self, std::size_t _idx, const Eigen::Vector3d & _v) -> void { return self->setVertex(_idx, _v); }, _ZN4dart8dynamics16LineSegmentShape9setVertexEmRKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_idx"), ::boost::python::arg("_v")))
.def("getVertex", [](const dart::dynamics::LineSegmentShape *self, std::size_t _idx) -> const Eigen::Vector3d & { return self->getVertex(_idx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics16LineSegmentShape9getVertexEm_docstring, (::boost::python::arg("_idx")))
.def("getVertices", [](const dart::dynamics::LineSegmentShape *self) -> const std::vector<Eigen::Vector3d> & { return self->getVertices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics16LineSegmentShape11getVerticesEv_docstring)
.def("addConnection", [](dart::dynamics::LineSegmentShape *self, std::size_t _idx1, std::size_t _idx2) -> void { return self->addConnection(_idx1, _idx2); }, _ZN4dart8dynamics16LineSegmentShape13addConnectionEmm_docstring, (::boost::python::arg("_idx1"), ::boost::python::arg("_idx2")))
.def("removeConnection", [](dart::dynamics::LineSegmentShape *self, std::size_t _vertexIdx1, std::size_t _vertexIdx2) -> void { return self->removeConnection(_vertexIdx1, _vertexIdx2); }, _ZN4dart8dynamics16LineSegmentShape16removeConnectionEmm_docstring, (::boost::python::arg("_vertexIdx1"), ::boost::python::arg("_vertexIdx2")))
.def("removeConnection", [](dart::dynamics::LineSegmentShape *self, std::size_t _connectionIdx) -> void { return self->removeConnection(_connectionIdx); }, _ZN4dart8dynamics16LineSegmentShape16removeConnectionEm_docstring, (::boost::python::arg("_connectionIdx")))
.def("getConnections", [](const dart::dynamics::LineSegmentShape *self) -> const Eigen::aligned_vector<Eigen::Vector2i> & { return self->getConnections(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics16LineSegmentShape14getConnectionsEv_docstring)
.def("computeInertia", [](const dart::dynamics::LineSegmentShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, _ZNK4dart8dynamics16LineSegmentShape14computeInertiaEd_docstring, (::boost::python::arg("mass")))
;
}

/* footer */
