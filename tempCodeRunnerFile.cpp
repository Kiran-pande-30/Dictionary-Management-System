case 4:
                cout << "Enter the prefix: ";
                cin >> prefix;
                cout << "Autocomplete suggestions:" << endl;
                {
                    vector<string> suggestions = dictionary.autocomplete(prefix);
                    for (const string& suggestion : suggestions) {
                        cout << suggestion << endl;
                    }
                }
                break;