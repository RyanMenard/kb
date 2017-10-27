//Available key types are:
// NONE, HID, MOD, MIDI, FUNC, CLICK, MOUSE_X, MOUSE_Y, SCROLL_X, SCROLL_Y, HIDMOD

#define NONE                            (key){NONE_t, 0}
#define HID(code)                       (key){HID_t, code}
#define MOD(code)                       (key){MOD_t, code}
#define MIDI(pitch)                     (key){MIDI_t, pitch}
#define FUNC(fn)                        (key){FUNC_t, (uint16_t) &fn}
#define CLICK(button)                   (key){CLICK_t, button}
#define MOUSE_X(amount)                 (key){MOUSE_X_t, (uint16_t) amount}
#define MOUSE_Y(amount)                 (key){MOUSE_Y_t, (uint16_t) amount}
#define SCROLL_X(amount)                (key){SCROLL_X_t, (uint16_t) amount}
#define SCROLL_Y(amount)                (key){SCROLL_Y_t, (uint16_t) amount}
#define HIDMOD(hidcode, modcode)        (key){HIDMOD_t, ((uint16_t) hidcode << 8) + modcode}

const key QWERTY_map[ROWS][COLS] = {
{HID(_ESCAPE),HID(_1_EXCLAMATION),HID(_2_AT),HID(_3_HASHMARK),HID(_4_DOLLAR),HID(_5_PERCENTAGE),HID(_6_CARET),HID(_7_AMPERSAND),HID(_8_ASTERISK),HID(_9_OPENING_PARENTHESIS),HID(_0_CLOSING_PARENTHESIS),HID(_MINUS_AND_UNDERSCORE),HID(_EQUAL_AND_PLUS),HID(_BACKSPACE)},
{HID(_TAB),HID(_Q),HID(_W),HID(_E),HID(_R),HID(_T),HID(_Y),HID(_U),HID(_I),HID(_O),HID(_P),HID(_OPENING_BRACKET_AND_BRACE),HID(_CLOSING_BRACKET_AND_BRACE),HID(_BACKSLASH_AND_PIPE)},
{HID(_BACKSPACE),HID(_A),HID(_S),HID(_D),HID(_F),HID(_G),HID(_H),HID(_J),HID(_K),HID(_L),HID(_SEMICOLON_AND_COLON),HID(_APOSTROPHE_AND_QUOTE),HID(_ENTER),HID(_DELETE)},
{MOD(_MOD_LEFTSHIFT),HID(_Z),HID(_X),HID(_C),HID(_V),HID(_B),HID(_N),HID(_M),HID(_COMMA_AND_LESS_THAN_SIGN),HID(_DOT_AND_GREATER_THAN_SIGN),HID(_SLASH_AND_QUESTION_MARK),MOD(_MOD_RIGHTSHIFT),HID(_UP_ARROW),NONE},
{MOD(_MOD_LEFTCTRL),MOD(_MOD_LEFTGUI),MOD(_MOD_LEFTALT),FUNC(toggleLayer_FN),HID(_SPACE),NONE,FUNC(toggleLayer_LRDN),HID(_SPACE),NONE,FUNC(toggleLayer_LRUP),FUNC(toggleLayer_MOUSE),HID(_LEFT_ARROW),HID(_DOWN_ARROW),HID(_RIGHT_ARROW)}};

const key COLEMAK_map[ROWS][COLS] = {
{HID(_ESCAPE),HID(_1_EXCLAMATION),HID(_2_AT),HID(_3_HASHMARK),HID(_4_DOLLAR),HID(_5_PERCENTAGE),HID(_6_CARET),HID(_7_AMPERSAND),HID(_8_ASTERISK),HID(_9_OPENING_PARENTHESIS),HID(_0_CLOSING_PARENTHESIS),HID(_MINUS_AND_UNDERSCORE),HID(_EQUAL_AND_PLUS),NONE},
{HID(_TAB),HID(_Q),HID(_W),HID(_F),HID(_P),HID(_G),HID(_J),HID(_L),HID(_U),HID(_Y),HID(_SEMICOLON_AND_COLON),HID(_OPENING_BRACKET_AND_BRACE),HID(_CLOSING_BRACKET_AND_BRACE),HID(_BACKSLASH_AND_PIPE)},
{HID(_BACKSPACE),HID(_A),HID(_R),HID(_S),HID(_T),HID(_D),HID(_H),HID(_N),HID(_E),HID(_I),HID(_O),HID(_APOSTROPHE_AND_QUOTE),HID(_ENTER),HID(_DELETE)},
{NONE,HID(_Z),HID(_X),HID(_C),HID(_V),HID(_B),HID(_K),HID(_M),HID(_COMMA_AND_LESS_THAN_SIGN),HID(_DOT_AND_GREATER_THAN_SIGN),HID(_SLASH_AND_QUESTION_MARK),MOD(_MOD_RIGHTSHIFT),HID(_UP_ARROW),NONE},
{MOD(_MOD_LEFTCTRL),MOD(_MOD_LEFTGUI),MOD(_MOD_LEFTALT),FUNC(toggleLayer_FN),MOD(_MOD_LEFTSHIFT),NONE,FUNC(toggleLayer_LRDN),HID(_SPACE),NONE,FUNC(toggleLayer_LRUP),FUNC(toggleLayer_MOUSE),HID(_LEFT_ARROW),HID(_DOWN_ARROW),HID(_RIGHT_ARROW)}};

const key FN_map[ROWS][COLS] = {
{NONE,HID(_F1),HID(_F2),HID(_F3),HID(_F4),HID(_F5),HID(_F6),HID(_F7),HID(_F8),HID(_F9),HID(_F10),HID(_F11),HID(_F12),FUNC(resetToBootloader)},
{NONE,FUNC(targetLayer_QWERTY),NONE,NONE,HID(_POWER),NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE},
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE},
{MOD(_MOD_LEFTSHIFT),NONE,NONE,FUNC(targetLayer_COLEMAK),NONE,NONE,NONE,FUNC(targetLayer_MIDI),NONE,NONE,NONE,NONE,HID(_PAGE_UP),NONE},
{MOD(_MOD_LEFTCTRL),MOD(_MOD_LEFTGUI),MOD(_MOD_LEFTALT),FUNC(toggleLayer_FN),NONE,NONE,FUNC(toggleLayer_LRDN),NONE,NONE,NONE,NONE,HID(_HOME),HID(_PAGE_DOWN),HID(_END)}};

const key LRUP_map[ROWS][COLS] = {
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,HID(_NUM_LOCK),HID(_KEYPAD_SLASH),HID(_KEYPAD_ASTERISK),HID(_KEYPAD_MINUS),HID(_CAPS_LOCK)},
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,HID(_KEYPAD_7_AND_HOME),HID(_KEYPAD_8_AND_UP_ARROW),HID(_KEYPAD_9_AND_PAGE_UP),HID(_KEYPAD_PLUS),NONE},
{HID(_BACKSPACE),NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,HID(_KEYPAD_4_AND_LEFT_ARROW),HID(_KEYPAD_5),HID(_KEYPAD_6_AND_RIGHT_ARROW),HID(_KEYPAD_PLUS),NONE},
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,HID(_KEYPAD_1_AND_END),HID(_KEYPAD_2_AND_DOWN_ARROW),HID(_KEYPAD_3_AND_PAGE_DOWN),HID(_KEYPAD_ENTER),NONE},
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,FUNC(toggleLayer_LRUP),HID(_KEYPAD_0_AND_INSERT),HID(_KEYPAD_DOT_AND_DELETE),HID(_KEYPAD_ENTER),NONE}};

const key LRDN_map[ROWS][COLS] = {
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE},
{NONE,NONE,NONE,NONE,HID(_GRAVE_ACCENT_AND_TILDE),NONE,NONE,HIDMOD(_GRAVE_ACCENT_AND_TILDE, _MOD_LEFTSHIFT),NONE,NONE,NONE,NONE,NONE,NONE},
{HID(_BACKSPACE),HIDMOD(_9_OPENING_PARENTHESIS, _MOD_LEFTSHIFT),HIDMOD(_0_CLOSING_PARENTHESIS, _MOD_LEFTSHIFT),HID(_OPENING_BRACKET_AND_BRACE),HID(_CLOSING_BRACKET_AND_BRACE),HIDMOD(_OPENING_BRACKET_AND_BRACE, _MOD_LEFTSHIFT),HIDMOD(_CLOSING_BRACKET_AND_BRACE, _MOD_LEFTSHIFT),HIDMOD(_EQUAL_AND_PLUS, _MOD_LEFTSHIFT),HID(_EQUAL_AND_PLUS),HID(_MINUS_AND_UNDERSCORE),HIDMOD(_MINUS_AND_UNDERSCORE, _MOD_LEFTSHIFT),HID(_ENTER),HID(_DELETE),NONE},
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,HID(_VOLUME_UP),NONE,NONE},
{NONE,NONE,NONE,NONE,NONE,NONE,FUNC(toggleLayer_LRDN),NONE,NONE,NONE,NONE,HID(_VOLUME_DOWN),HID(_VOLUME_DOWN),HID(_VOLUME_UP)}};

const key MIDI_map[ROWS][COLS] = {
{MIDI(84),MIDI(85),MIDI(86),MIDI(87),MIDI(88),MIDI(89),MIDI(90),MIDI(91),MIDI(92),MIDI(93),MIDI(94),MIDI(95),FUNC(resetPitch),FUNC(increasePitch)},
{MIDI(72),MIDI(73),MIDI(74),MIDI(75),MIDI(76),MIDI(77),MIDI(78),MIDI(79),MIDI(80),MIDI(81),MIDI(82),MIDI(83),NONE,FUNC(decreasePitch)},
{MIDI(60),MIDI(61),MIDI(62),MIDI(63),MIDI(64),MIDI(65),MIDI(66),MIDI(67),MIDI(68),MIDI(69),MIDI(70),MIDI(71),NONE,NONE},
{MIDI(48),MIDI(49),MIDI(50),MIDI(51),MIDI(52),MIDI(53),MIDI(54),MIDI(55),MIDI(56),MIDI(57),MIDI(58),MIDI(59),HID(_UP_ARROW),FUNC(toggleLayer_COLEMAK)},
{MOD(_MOD_LEFTCTRL),MOD(_MOD_LEFTGUI),MOD(_MOD_LEFTALT),FUNC(toggleLayer_FN),HID(_SPACE),NONE,NONE,HID(_SPACE),NONE,NONE,NONE,HID(_LEFT_ARROW),HID(_DOWN_ARROW),HID(_RIGHT_ARROW)}};

const key MOUSE_map[ROWS][COLS] = {
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,CLICK(5),CLICK(2),CLICK(6)},
{NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,CLICK(3),SCROLL_Y(1),CLICK(4)},
{NONE,FUNC(mouseSpeed_3),FUNC(mouseSpeed_2),FUNC(mouseSpeed_1),FUNC(mouseSpeed_0),NONE,NONE,NONE,NONE,NONE,NONE,SCROLL_X(-1),SCROLL_Y(-1),SCROLL_X(1)},
{MOD(_MOD_LEFTSHIFT),NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,NONE,CLICK(0),MOUSE_Y(-9),CLICK(1)},
{MOD(_MOD_LEFTCTRL),MOD(_MOD_LEFTGUI),MOD(_MOD_LEFTALT),NONE,NONE,NONE,NONE,NONE,NONE,NONE,FUNC(toggleLayer_MOUSE),MOUSE_X(-9),MOUSE_Y(9),MOUSE_X(9)}};