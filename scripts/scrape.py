import sys
import selenium.webdriver as webdriver
import re

# Function to validate URL
# using regular expression
def isValidURL(str):
    regex = ("((http|https)://)(www.)?" +
             "[a-zA-Z0-9@:%._\\+~#?&//=]" +
             "{2,256}\\.[a-z]" +
             "{2,6}\\b([-a-zA-Z0-9@:%" +
             "._\\+~#?&//=]*)")

    p = re.compile(regex)

    if (str == None):
        return False

    if(re.search(p, str)):
        return True
    else:
        return False


def get_results(url):
    browser = webdriver.Firefox()
    browser.get(url)

    input_box = browser.find_element_by_class_name("input")
    output_box = browser.find_element_by_class_name("output")

    inp = input_box.find_elements_by_tag_name("pre")[0]
    out = output_box.find_elements_by_tag_name("pre")[0]

    print(inp.text)
    print(out.text)
    with open("./sols/input.txt", "w") as f:
        f.write(inp.text)

    with open("./sols/output.txt", "w") as f:
        f.write(out.text)

called = False
for i in range(len(sys.argv)):
    if isValidURL(sys.argv[i]):
        get_results(sys.argv[i])
        called = True

if not called:
    print("Valid URL not found")
    raise FileNotFoundError


