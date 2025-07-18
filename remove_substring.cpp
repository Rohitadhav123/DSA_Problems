string removeAllABC(string str) {
    string result = str;
    size_t pos = result.find("abc");

    while (pos != string::npos) {
        result.erase(pos, 3);  // erase "abc"
        pos = result.find("abc");  // check again
    }

    return result;
}