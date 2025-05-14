//
// Created by mrmak on 5/14/25.
//

#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
    puts("Printable ASCII:");
    for (int i = 32; i < 127; ++i) {
        putchar(i);
        putchar(i % 16 == 15 ? '\n' : ' ');
    }

    /*
     * So we can see, the printable ascii is from
     * decimal point 32 to 126
     */

    /*
     * Let's learn more about ASCII
     *
     * - ASCII is a character encoding standard
     * - ASCII is a 7-bit character set
     * - It can represent 128 characters
     * - The first 32 characters (0-31 or 0x00-0x1F) and last one (127 or 0x7F) are control characters
     * - The next 96 characters (32-126 or 0x20-0x7E) are printable characters
     * - The first 128 characters of ASCII are the same in UTF-8
     * - ASCII is a subset of UTF-8
     * - Some ASCII characters are not printable, they are the control characters
     * - The control characters are used for text formatting and control
     * - The printable characters are used for text representation
     * - The printable characters include letters, digits, punctuation, and symbols
     * - Uppercase letters start from 65 to 90 (0x41–0x5A)
     * - Lowercase letters start from 97 to 122 (0x61–0x7A)
     * - Digits start from 48 to 57 (0x30–0x39)
     * - The remaining characters (0–47 or 0x00–0x2F), (58–64 or 0x3A–0x40),
     *     (91–96 or 0x5B–0x60), and (123–127 or 0x7B–0x7F) are
     *     control characters, punctuations, and symbols
     *
     *
     * Now let's learn about individual ASCII characters
     *
     * - SOH (0x01), Start of Heading
     *      > SOH is a control character
     *      > It marks the beginning of the header in data transmission
     *      > It was used in early protocols (like XMODEM, RS-232) to signal header start
     *      > Typically used before STX and followed by ETX
     *      > It was essential in serial communication, teletype, and early network protocols
     *      > Appears as ^A in caret notation
     *      > In modern usages, SOH is rarely used, but still relevant in embedded, or legacy environments
     * - STX (0x02), Start of Text
     *      > STX is a control character
     *      > It marks the beginning of the actual message content or body in data transmission
     *      > It is used to separate control/meta data from message data
     *      > Appears as ^B in caret notation
     *      > Like SOH, STX is also rarely used in modern applications
     * - ETX (0x03), End of Text
     *      > ETX is a control character
     *      > It marks the end of the message content or body in data transmission
     *      > It is often paired with STX to define the boundaries of main data
     *      > Enables error checking (e.g. CRC after ETX)
     *      > Appears as ^C in caret notation
     *      > Like SOH and STX, ETX is also rarely used in modern applications
     * - EOT (0x04), End of Transmission
     *      > EOT is a control character
     *      > It signals the end of a transmission or communication session
     *      > Often used to tell the receiver that no more data is coming
     *      > Common in early communications and terminal protocols
     *      > Appears ad ^D in caret notation
     *      > In Unix systems, pressing Ctrl+D on a terminal sends EOT, signaling EOF to programs
     *      > Helps protocols and systems cleanly terminate input or connections
     *      > Still relevant in command-line interfaces, shells, and legacy communication systems
     * - ENQ (0x05), Enquiry
     *      > ENQ is a control character
     *      > It is used to request a response from a receiving device
     *      > Often used in pooling or two-way communication to check device readiness or presence
     *      > In response, the device may send an ACK or NAK
     *      > Appears as ^E in caret notation
     *      > Useful in serial communication, terminal control, and industrial protocols
     *      > Like SOH, STX, and ETX, ENQ is also rarely used in modern applications
     *      > Helps maintain synchronization and ensure reliable data exchange
     * - ACK (0x06), Acknowledge
     *      > ACK is a control character
     *      > It indicates that previous message or transmission was received successfully
     *      > Used in communication protocols to confirm receipt of data
     *      > Typically sent in response to ENQ or after receiving a valid block of data
     *      > Appears as ^F in caret notation
     *      > Helps prevent data loss and maintain synchronization in half-duplex or slow communication links
     * - BEL (0x07), Bell
     *      > BEL is a control character
     *      > Originally used to trigger an audible bell, beep, or alert on teletype machines
     *      > Sends an alert to the user, drawing attention without displaying a character
     *      > Appears as ^G in caret notation
     *      > Still supported by many terminal emulator and shells (e.g. `echo -e '\a'`)
     * - BS (0x08), Backspace
     *      > BS is a control character
     *      > It moves the cursor one position back
     *      > Appears as ^H in caret notation
     *      > Still recognized in terminal emulators and programming (e.g. '\b' in C or shell)
     * - HT (0x09), Horizontal Tabulation / Character Tabulation / tab
     *      > HT is a control character
     *      > It moves the cursor to the next horizontal tab stop
     *      > Commonly used for aligning text in column or indenting code
     *      > Appears as ^I in caret notation
     *      > Represented as `\t` in many programming languages
     *      > Still widely used in text editors, programming, and tabular data
     * - LF (0x0A), Line Feed / New Line / End of Line
     *      > LF is a control character
     *      > It moves the cursor to next line without returning to the beginning of the line
     *      > Used to advance text output downward in terminals and printers
     *      > Appears as ^J in caret notation
     *      > Represented as `\n` in many programming languages
     *      > In Unix/Linux and in network protocols like HTTP, LF is used as the new line character or as a line terminator
     * - VT (0x0B), Line Tabulation / Vertical Tabulation
     */

    return 0;
}