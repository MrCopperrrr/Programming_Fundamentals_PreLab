//2
void recover(char signal[]) {
    int lenght = strlen(signal);
    for (int i = 0; i <= lenght; ++i) {
        if (islower(signal[i])) {
            signal[i] = toupper(signal[i]);
        }
        else if (isupper(signal[i])) {
            signal[i] = tolower(signal[i]);
        }
    }

}
