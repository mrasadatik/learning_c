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
     * - HT (0x09), Horizontal Tabulation / Character Tabulation / Tab
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
     * - VT (0x0B), Line Tabulation / Vertical Tabulation / Vertical Tab
     *      > VT is a control character
     *      > It moves the cursor vertically down to the next vertical tab stop
     *      > Originally intended for text formatting and line printers
     *      > Appears as ^K in caret notation
     *      > Represented as `\v` in many programming languages
     *      > In modern usages it's nearly obsolete, but still supported in some terminal emulators and legacy systems
     * - FF (0x0C), Form Feed
     *      > FF is a control character
     *      > It advances the paper to the top of the next page on printers
     *      > Used to separate pages in printed output
     *      > Appears as ^L in caret notation
     *      > Represented as `\f` in many programming languages
     *      > In modern usages it is used in some printers for a page breaks in plain text documents or clear terminal commands
     * - CR (0x0D), Carriage Return
     *      > CR is a control character
     *      > It moves the cursor to the beginning of the current line without advancing downward
     *      > Originated from typewriters where it physically returned the carriage to the start of the line
     *      > Appears as ^M in caret notation
     *      > Represented as `\r` in many programming languages
     *      > In modern usages, CR is used as the newline character in classic Mac OS and combined with LF (CRLF `\r\n`) in Windows text files
     * - SO (0x0E), Shift Out (a.k.a. LOCKING-SHIFT ONE in 8-bit environment)
     *      > SO is a control character
     *      > It switches to an alternate character set or font
     *      > Used to conjunction with SI to toggle between standard and alternate text modes
     *      > Appears as ^N in caret notation
     *      > Its behaviour is context-specific and depends on the system, terminal, or application
     *      > In modern usages, SO is rarely used, but still relevant in legacy systems and specific applications
     * - SI (0x0F), Shift In (a.k.a. LOCKING-SHIFT ZERO in 8 bit environment)
     *      > SI is a control character
     *      > It reverts the character set or font back to the standard (after SO was used)
     *      > Pairs with SO to toggle between standard and alternate text modes
     *      > Appears as ^O in caret notation
     *      > Behaviour and Usages are similar to SO
     * - DLE (0x10), Data Link Escape
     *      > DLE is a control character
     *      > Used to indicate that the following character should be interpreted differently, often as part of a control protocol
     *      > Commonly seen in communication protocol to mark the beginning of a control sequence
     *      > Appears as ^P in caret notation
     *      > Helps differentiate control information from actual data during data transmission
     *      > In modern usages, DLE is occasionally used in serial communication, modem, embedded, and legacy systems
     * - DC1 (0x11), Device Control One
     *      > DC1 is a control character
     *      > Originally used to control auxiliary devices like printers or data link
     *      > Commonly known as XON in software flow control (XON/XOFF) to resume data transmission
     *      > Appears as ^Q in caret notation
     *      > Helps manage communication over serial lines without hardware flow control
     *      > In modern applications, DC1 is less common but still relevant in legacy systems and specific protocols
     * - DC2 (0x12), Device Control Two
     *      > DC2 is a control character
     *      > Designed to control auxiliary devices, but its functionalities are device specific
     *      > Less commonly used than DC1 and DC3
     *      > Appears as ^R in caret notation
     *      > Often used in specialized hardware for mode switching or secondary commands
     *      > Its usages is similar to DC1
     * - DC3 (0x13), Device Control Three
     *      > DC3 is a control character
     *      > Commonly known as XOFF in software flow control (XON/XOFF) to pause data transmission
     *      > Appears as ^S in caret notation
     *      > Paired with DC1 (XON) to manage data flow in serial communication without hardware handshaking
     *      > Helps prevent buffer overflows by halting incoming data temporarily
     *      > It is still in use in some serial terminal interfaces and legacy systems
     * - DC4 (0x14), Device Control Four
     *      > DC4 is a control character
     *      > Intended to control auxiliary devices, but its functionalities are device specific
     *      > Less commonly standardized than DC1, and DC3
     *      > Appears as ^T in caret notation
     *      > Sometimes used in custom device protocols for signaling or toggling device states
     *      > Its usages is similar to other DC characters
     * - NAK (0x15), Negative Acknowledge
     *      > NAK is a control character
     *      > Used to indicate that a received data packet is corrupt or invalid
     *      > Typically paired with ACK in communication protocols for error control
     *      > Appears as ^U in caret notation
     *      > Helps ensure data integrity by requesting retransmission of faulty or corrupt data
     *      > In modern systems it still used in some communication protocol, industrial systems, and low-level device interactions
     * - SYN (0x16), Synchronous Idle
     *      > SYN is a control character
     *      > Used in synchronous serial communication to maintain timing between sender and receiver when data is being sent
     *      > Helps keep both ends of a connection synchronized during idle periods
     *      > Appears as ^V in caret notation
     *      > Often sent repeatedly until meaningful data begins transmitting
     *      > In modern usages, SYN is less common but still relevant in specific communication protocols and legacy systems
     * - ETB (0x17), End of Transmission Block
     *      > ETB is a control character
     *      > Used to indicate the end of a block of data in data-oriented transmission
     *      > Helps delimit chunks of data for processing or verification
     *      > Appears as ^W in caret notation
     *      > Helps systems to transmit large data in manageable segments with structure
     *      > In modern systems it is occasionally used in legacy protocols or specialized systems like point-of-sale (POS) devices or industrial controllers
     * - CAN (0x18), Cancel
     *      > CAN is a control character
     *      > Used to indicate that the current operation, data block, or transmission should be aborted or canceled
     *      > Often used as abort command in communication protocols or terminal systems
     *      > Appears as ^X in caret notation
     *      > Ensure that incorrect, interrupted, or unwanted data is not processed further
     *      > In modern systems its still found in some low-level protocols and serial terminal control sequences, though usages is rare
     * - EM (0x19), End of Medium
     *      > EM is a control character
     *      > Originally signified the end of a physical medium, like a tape or disk
     *      > Marked a logical boundary to indicate no more data should be read or written beyond this point
     *      > Appears as ^Y in caret notation
     *      > Not commonly used in modern applications
     *      > Still used in legacy storage systems, archive formats, or device-specific protocols
     * - SUB (0x1A), Substitute / Feed replacement character
     *      > SUB is a control character
     *      > Historically used to mark invalid, unknown, or replaced characters during data transmission or storage
     *      > Appears as ^Z (Ctrl+Z) in caret notation
     *      > In DOS/Windows command line, pressing Ctrl+Z indicates end-of-file (EOF) in text input streams
     *      > In Unicode if an unrecognized byte of decoding error occurs, SUB is often substituted or mapped to U+FFFD, the 'Replacement Character'
     *      > U+FFFD is rendered as � or a visible box with a question mark, used to visibly indicate corrupted or unrecognized data
     *      > In modern systems, SUB itself rare, but the concept it represents like error substitution is still vital for handling malformed input in Unicode-aware parsers, browsers, terminals, and file decoders
     * - ESC (0x1B), Escape
     *      > ESC is a control character
     *      > Originally used to signal the start of an escape sequence (a special series of characters that change device behaviour)
     *      > Commonly used in terminal control (e.g. ANSI escape codes) to manipulate cursor position, color, or screen behaviour
     *      > Appears as ^[ in caret notation
     *      > In early computing, ESC was used to switch between different character sets or modes
     *      > In modern systems, ESC is still widely and heavily used in terminal emulators, text editors, command-line interfaces, and programing libraries that handles screen control or formatting (e.g. `\x1B[31m` for red text)
     * - FS (0x1C), File Separator
     *      > FS is a control character
     *      > Used to separate large block of data, specifically files, within a single stream or transmission
     *      > Part of a group of four separator characters (FS, GS, RS, US)
     *      > Appears as ^\ in caret notation
     *      > Allowed hierarchical structuring of data (file > group > record > unit) in early computing and punched tape formats
     *      > In modern systems, FS is rarely used directly, but the concept persists in structured data format (e.g. JSON, XML, and CSV), and some legacy communication protocols
     * - GS (0x1D), Group Separator
     *      > GS is a control character
     *      > Used to separate related group of records within a data stream or file
     *      > Appears as ^] in caret notation
     *      > It sits one level below FS in the hierarchy (file > group > record > unit)
     *      > Allowed systems to logically structure data for parsing and processing, especially in mainframe and punch card environments
     *      > In modern systems, GS is rarely used explicitly, but the logical grouping it represents is fundamental to data organization formats (e.g. nested arrays, objects, and datasets)
     * - RS (0x1E), Record Separator
     *      > RS is a control character
     *      > Used to separate individual records within a group in structured data streams
     *      > Appears as ^^ in caret notation
     *      > Forms part of a hierarchical data separation scheme (file > group > record > unit)
     *      > Enabled early data processing systems to distinguish records without printable delimiters
     *      > In modern systems, RS is rarely used directly, but the concept maps to row in database or lines in CSV/JSON/NDJSON where each entry is a record
     * - US (0x1F), Unit Separator
     *      > US is a control character
     *      > Used to separate the smallest units of data within a record (e.g. fields or columns)
     *      > Appears as ^_ in caret notation
     *      > Lowest level in ASCII data structuring hierarchy (file > group > record > unit)
     *      > Facilitated fine-grained parsing in early data systems and transmission formats
     *      > In modern systems, US is rarely used directly, but conceptually similar to field delimiters in structured data formats (e.g. CSV, TSV, JSON, and database tables)
     * - (space) (0x20), Space
     *      > The first printable character in ASCII table (punctuation and symbol block)
     *      > Used to separate words, numbers, and symbols in plain text
     *      > Visually blank but essential for formatting and readability
     *      > While printable, it is sometimes informally considered a control-like character due to its role in formating
     *      > It is not a control character in the traditional sense
     *      > It is the only space character in ASCII table, which is also not represented by a visible glyph
     * - ! (0x21), Exclamation Mark
     *      > A printable character (punctuation and symbol block)
     *      > Commonly used to indicate strong feelings, commands, or emphasis in text
     *      > In programming, it is often used as a logical negation operator (e.g. `!true` evaluates to `false`)
     *      > In shell scripting, it is used to denote history expansion (e.g. `!!` to repeat the last command)
     *      > In mathematics, it is used to denote factorial (e.g. `5!` is `120`)
     *      > Also called "bang" in some programming contexts (e.g. shell scripting)
     * - " (0x22), Quotation Mark (a.k.a. Double Quote)
     *      > A printable character (punctuation and symbol block)
     *      > Used to enclose strings, quotes, or dialogue in text
     *      > In programming, it is used to denote string literals (e.g. `"Hello, World!"`)
     *      > Natural and vertical in appearance; not curved or typographic
     * - # (0x23), Number Sign (a.k.a. Hash, Pound (weight), Octothorpe, Crosshatch, Hashtag, Sharp)
     *      > A printable character (punctuation and symbol block)
     *      > Used in programming for preprocessor directives (e.g. `#include` in C/C++)
     *      > Also used for comments in scripting languages (e.g. `# This is a comment` in Python/Bash)
     * - $ (0x24), Dollar Sign
     *      > A printable character (punctuation and symbol block)
     *      > Used to denote currency, specifically the US dollar
     *      > In programming, used in various ways like variable prefixes (e.g. `$variable` in PHP, Perl), string interpolation (e.g. `${variable}` in JavaScript), and regex patterns (e.g. `$` to match end of line)
     *      > This symbol has typically one or two vertical bars through 'S' depending on font or style, but this is purely stylistic
     * - % (0x25), Percent Sign
     *      > A printable character (punctuation and symbol block)
     *      > Used to denote percentage in mathematics and statistics
     *      > In programming, commonly used as modulo operator
     *      > Also used in format specifiers (e.g. `%d` for integers in C's `printf`)
     * - & (0x26), Ampersand
     *      > A printable character (punctuation and symbol block)
     *      > Represents the word "and"; originally a ligature of the latin characters 'e' and 't' ("et")
     *      > In programming, used for bitwise AND operations, logical AND operations, and as a reference operator
     *      > In HTML, used to denote character entities
     * - ' (0x27), Apostrophe (a.k.a. Single Quote)
     *      > A printable character (punctuation and symbol block)
     *      > Used to denote possession, contractions, or quotes in text
     *      > In programming, used to denote character literals
     *      > Also used as string delimiters in some languages
     *      > Glyph is vertical and natural; context determines whether it's a quote or apostrophe
     * - ( (0x28), Left Parenthesis (a.k.a. Open Parenthesis, Opening Parenthesis, Left Round Bracket)
     *      > A printable character (punctuation and symbol block)
     *      > Used to group expressions in mathematics and programming paired with ')'
     * - ) (0x29), Right Parenthesis (a.k.a. Close Parenthesis, Closing Parenthesis, Right Round Bracket)
     *      > A printable character (punctuation and symbol block)
     *      > Used to close grouped expressions in mathematics and programming paired with '('
     * - * (0x2A), Asterisk (a.k.a. Star)
     *      > A printable character (punctuation and symbol block)
     *      > Commonly used as a multiplication operator in mathematics and programming
     *      > In programming, used for wildcard matching, pointers, and dereferencing
     * - + (0x2B), Plus Sign
     *      > A printable character (math operator)
     *      > Commonly used as an addition operator in mathematics and programming
     *      > In programming, used also for string concatenation
     *      > Also used in expression like increment (++), regular expression, and URL encoding
     * - , (0x2C), Comma
     *      > A printable character (punctuation)
     *      > Used to separate items in lists, clauses, or numbers
     *      > In programming, used to separate function arguments, array elements, and variable declarations
     * - - (0x2D), Hyphen-Minus (a.k.a. Dash, Minus Sign)
     *      > A printable character (punctuation)
     *      > 
     */

    return 0;
}