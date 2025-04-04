void addAddendum(SCP &obj, string addendum) {
     string* newAddendums = new string[obj.numAddendums + 1];
    
    for (int i = 0; i < obj.numAddendums; ++i) {
        newAddendums[i] = obj.addendums[i];
    }
    
    newAddendums[obj.numAddendums] = addendum;

    delete[] obj.addendums;
    
    obj.addendums = newAddendums;
    obj.numAddendums++;
}