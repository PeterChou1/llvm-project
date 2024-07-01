// RUN: rm -rf %t && mkdir -p %t/docs %t/build
// RUN: clang-doc --format=html --doxygen --output=%t/docs --executor=standalone %s

namespace
{
    void anonFunction() {}
    class AnonClass {};
}

namespace PrimaryNamespace {
    // Function in PrimaryNamespace
    void functionInPrimaryNamespace() {}

    // Class in PrimaryNamespace
    class ClassInPrimaryNamespace {};

    // Nested namespace
    namespace NestedNamespace {
        // Function in NestedNamespace
        void functionInNestedNamespace() {}
        // Class in NestedNamespace
        class ClassInNestedNamespace {};
    }
}

namespace AnotherNamespace {
    // Function in AnotherNamespace
    void functionInAnotherNamespace() {}
    // Class in AnotherNamespace
    class ClassInAnotherNamespace {};
}