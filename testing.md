# Testing

The following are common tests that can be reused in numerous scenarios.

## Scenarios

### Searching for a particular string in source file

```c++
TEST_CASE("Task is ready for evaluation")
{
    const char* search_string = "SKIP_TESTING_TASK_1 TRUE";
    const char* filename   = "csc232.h";
    std::ifstream input_stream{ filename, std::ios::in };
    if (!input_stream)
    {
        FAIL_CHECK("Test source file could not be opened!");
        exit(EXIT_FAILURE);
    }

    // Read the entire file into memory
    std::string file_contents;
    std::string current_line;
    while (getline(input_stream, current_line ))
        file_contents += current_line + '\n';
    input_stream.close();

    size_t pos = file_contents.find(search_string);
    REQUIRE_MESSAGE((static_cast<int>(pos) > 0), "It appears you have not toggled TEST_TASK_1 from FALSE to TRUE. Please do this before attempt to validate this task.");
}
```
