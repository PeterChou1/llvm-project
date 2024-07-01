#pragma once

/** @brief Maximum size for the IntArray typedef */
#define MAX_SIZE 100

/**
 * @brief Template class for a simple array
 *
 * @tparam T The type of elements in the array
 * @tparam Size The fixed size of the array
 */
template <typename T, int Size>
class Array {
public:
    /** @brief Default constructor */
    Array();

    /**
     * @brief Array access operator
     *
     * @param index The index of the element to access
     * @return T& Reference to the element at the given index
     */
    T& operator[](int index);

    /**
     * @brief Get the size of the array
     *
     * @return int The size of the array
     */
    int size() const;

private:
    T m_data[Size]; /**< The array data */
};

/**
 * @brief Template specialization for bool type
 *
 * This specialization uses bit manipulation for space efficiency.
 *
 * @tparam Size The fixed size of the array
 */
template <int Size>
class Array<bool, Size> {
public:
    /** @brief Default constructor */
    Array();

    /** @brief Destructor */
    ~Array();

    /**
     * @brief Set a boolean value at a specific index
     *
     * @param index The index to set
     * @param value The boolean value to set
     */
    void set(int index, bool value);

    /**
     * @brief Get a boolean value at a specific index
     *
     * @param index The index to get
     * @return bool The value at the given index
     */
    bool get(int index) const;

    /**
     * @brief Get the size of the array
     *
     * @return int The size of the array
     */
    int size() const;

private:
    unsigned char* m_data; /**< The bit array data */
    int m_size; /**< The size of the array */
};

/** @brief Typedef for an integer array of MAX_SIZE */
typedef Array<int, MAX_SIZE> IntArray;