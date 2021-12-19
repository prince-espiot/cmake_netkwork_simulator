include vars.make
CXXFLAGS = -g -std=c++14 -Wall -Wextra -pedantic
CPPFLAGS += -c
VALGRINDFLAGS = --trace-children=yes --leak-check=full --show-leak-kinds=all

ifeq ($(OS),Windows_NT)
	RM=del /f /q
	EXECUTABLE:=$(EXECNAME).exe
else
	RM=rm -f
	EXECUTABLE:=$(EXECNAME).out
	TEXECUTABLE:=$(TEXECNAME).out
endif

.PHONY: all clean run valgrind-run

all: main run
  
main: $(OBJECTS) $(COBJECTS)
	@echo "Linking"
	$(CXX) $(OBJECTS) $(COBJECTS) $(LDFLAGS) -o $(EXECUTABLE)

$(OBJECTS): %.o : %.cpp $(HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -o $@
	
$(COBJECTS): %.o : %.c $(HEADERS)
	$(CC) $(CPPFLAGS) $(CFLAGS) $< -o $@

test: $(TOBJECTS) $(COBJECTS)
	@echo "Test Running"
	$(CXX) $(TOBJECTS) $(CTOBJECTS) $(LDFLAGS) -o $(TEXECUTABLE)
	@./$(TEXECUTABLE)

clean:
	$(RM) src/*.o $(EXECUTABLE) $(EXECNAME).exe $(CLEAN_FILES)
	$(RM) tests/*.o $(TEXECUTABLE) $(TEXECNAME).exe $(CLEAN_FILES)

run: 
	@echo "Running \"$(EXECUTABLE)\""
	@./$(EXECUTABLE)
	
valgrind-run: main
	@valgrind $(VALGRINDFLAGS) ./$(EXECUTABLE)
