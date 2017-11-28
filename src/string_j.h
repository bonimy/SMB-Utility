﻿/************************************************************************************

                                  smb Utility

  File: string_j.h
  Description:
  History:

 ************************************************************************************/
#ifndef STRING_J_H
#define STRING_J_H

#define PROGRAMNAME  "SMB Utility"

#define STRING_VERSION_CONTRIBUTION "Multi-6502 CPU emulator by Neil Bradley (neil@synthcom.com)"

#define STRING_NULL    ""
#define STRING_UNKNOWN "不明"

#define STRING_LOGVIEW_FILESAVE "%sに保存しました。"
#define STRING_LOGVIEW_FILEOPEN "%sを開きました。"
#define STRING_LOGVIEW_LOADCHR  "%sから%.4xHﾊﾞｲﾄのCHRROMを読み込みました。"

//ｳｲﾝﾄﾞｳのﾀｲﾄﾙ
//
#define STRING_FILEOPENDIALOG_CHRLOAD "ｷｬﾗｸﾀﾛﾑの読み込み"
#define STRING_WINDOW_EMULATOR        "ｴﾐｭﾚｰﾀ"
#define STRING_WINDOW_OBJLIST         "ｵﾌﾞｼﾞｪｸﾄ ﾘｽﾄ"
#define STRING_WINDOW_OBJVIEW         "ｵﾌﾞｼﾞｪｸﾄ ﾋﾞｭｰ"

//
#define STRING_OBJVIEW_TITLE          "%s <%dﾍﾟｰｼﾞ>"
#define STRING_OBJVIEW_TITLE2         "%s <%d-%dﾍﾟｰｼﾞ>"
#define STRING_OBJVIEW_TOOLTIP        "%d,(%d,%d) %s"

//ｽﾃｰﾀｽﾊﾞｰ
#define STRING_STATUSBAR_EMULOAD  "ﾛｰﾄﾞしました。"
#define STRING_STATUSBAR_EMUSAVE  "ｾｰﾌﾞされました。"
#define STRING_STATUSBAR_FILESAVE "ﾌｧｲﾙに保存しました。"

//ﾌｧｲﾙｴﾗｰ
#define STRING_FILEERROR_SAVE       "上書き保存できません。"
#define STRING_FILEERROR_SAVEAS     "保存できません。"
#define STRING_FILEERROR_FILEFORMAT "ﾌｧｲﾙの形式にｴﾗｰがあります。"
#define STRING_FILEERROR_NOTFOUND   "ﾌｧｲﾙが見つかりません。"

//ﾒｯｾｰｼﾞ
#define STRING_CONFIRM_SAVE         "上書き保存しますか？"
#define STRING_CONFIRM_EXIT         "変更を保存しますか？"
#define STRING_CONFIRM_RELOAD       "ﾌｧｲﾙが外部ｴﾃﾞｨﾀで更新されています。\n再ﾛｰﾄﾞしますか。（再ﾛｰﾄﾞすると、未保存の内容は失われます。）"
#define STRING_CONFIRM_DEMORECORD   "ﾃﾞﾓのﾚｺｰﾃﾞｨﾝｸﾞを開始します。"
#define STRING_CONFIRM_DEMORECORD2  "ﾃﾞﾓのﾚｺｰﾃﾞｨﾝｸﾞを終了しました。"
#define STRING_CONFIRM_UPDATEWORLD  "ﾜｰﾙﾄﾞの区分の更新を行います。"

//ｵﾌﾟｼｮﾝ ﾌﾟﾛﾊﾟﾃｲ ｼｰﾄ
#define STRING_OPTIONDIALOG_TITLE       "ｵﾌﾟｼｮﾝ"
#define STRING_OPTIONDIALOG_EMULATOR    "ｴﾐｭﾚｰﾀ"
#define STRING_OPTIONDIALOG_EDITOR      "ｴﾃﾞｨﾀ"
#define STRING_OPTIONDIALOG_APPLICATION "ｱﾌﾟﾘｹｰｼｮﾝ"
#define STRING_OPTIONDIALOG_OBJECTVIEW  "ｵﾌﾞｼﾞｪｸﾄﾋﾞｭｰ"

//ﾂｰﾙﾁｯﾌﾟ
#define STRING_TOOLTIP_OPEN              "開く"
#define STRING_TOOLTIP_SAVE              "上書き保存"
#define STRING_TOOLTIP_ROOM              "ﾙｰﾑの変更"
#define STRING_TOOLTIP_BADGUYS           "敵"
#define STRING_TOOLTIP_MAP               "地形"
#define STRING_TOOLTIP_TESTPLAY          "ﾃｽﾄﾌﾟﾚｲ"
#define STRING_TOOLTIP_PAGETESTPLAY      "ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ"
#define STRING_TOOLTIP_HALFPOINTTESTPLAY "途中ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ"
#define STRING_TOOLTIP_STOP              "停止"
#define STRING_TOOLTIP_TESTPLAYSETTING   "ﾃｽﾄﾌﾟﾚｲの設定"
//#define STRING_TOOLTIP_ETC               "､その他"

// オブジェクトを送るダイアログ
#define STRING_SENDOBJECT_SRCERROR "送り元のｵﾌﾞｼﾞｪｸﾄは、ﾍﾟｰｼﾞの関係に影響を与えるｵﾌﾞｼﾞｪｸﾄです。"
#define STRING_SENDOBJECT_DSTERROR "送り先のﾍﾟｰｼﾞには、ｵﾌﾞｼﾞｪｸﾄがありません。"
#define STRING_SENDOBJECT_OVEROBJ  "送り先のﾙｰﾑには、これ以上ｵﾌﾞｼﾞｪｸﾄを送ることができません。"

#define STRING_UNDO_MENUTEXT              "元に戻す(&U) \"%s\""
#define STRING_UNDONAME_KEYEDIT           "ｷｰﾎﾞ-ﾄﾞ入力"
#define STRING_UNDONAME_DLGEDIT           "ﾀﾞｲｱﾛｸﾞ入力"
#define STRING_UNDONAME_SENDOBJ           "ｵﾌﾞｼﾞｪｸﾄを送る"
#define STRING_UNDONAME_HEADDLG           "設定"
#define STRING_UNDONAME_CHRLOAD           "ｷｬﾗｸﾀﾛﾑの読み込み"
#define STRING_UNDONAME_TOOLSTR           "文字列の編集"
#define STRING_UNDONAME_TOOLLOOPBIN       "ﾙｰﾌﾟの編集(ﾊﾞｲﾅﾘ)"
#define STRING_UNDONAME_TOOLWORLD         "ﾜｰﾙﾄﾞの区分の自動更新"
#define STRING_UNDONAME_TOOLAREAROOM      "ｴﾘｱの開始ﾙｰﾑの編集"
#define STRING_UNDONAME_TOOLDEMORECORDER  "ﾃﾞﾓ ﾚｺｰﾀﾞｰ"
#define STRING_UNDONAME_TOOLOTHER         "その他の設定"
//#define STRING_UNDONAME_TOOLGLOBAL        "全般の設定"


#define STRING_POLEGFX_DEFAULT "ﾃﾞﾌｫﾙﾄ"
#define STRING_POLEGFX_ROPE    "ひも"
#define STRING_POLEGFX_TREE    "木"
#define STRING_POLEGFX_OTHER   "その他"

#define STRING_SETTING_WORLDX   "ﾜｰﾙﾄﾞ%d"
#define STRING_SETTING_WARPZONE "ﾜｰﾌﾟｿﾞｰﾝ"
#define STRING_SETTING_1UP      "1UPｷﾉｺ"
#define STRING_SETTING_KOOPA    "ｸｯﾊﾟ"
#define STRING_SETTING_WORLD    "ﾜｰﾙﾄﾞ"
#define STRING_SETTING_OTHER    "その他"
#define STRING_SETTING_TITLE    "その他の設定"


#define STRING_STRINGDATA_01 "MARIO(ｽﾃｰﾀｽ)"
#define STRING_STRINGDATA_02 "MARIO(2P時のﾀｲﾑｱｯﾌﾟ)"
#define STRING_STRINGDATA_03 "MARIO(ｹﾞｰﾑｵｰﾊﾞｰ時)"
#define STRING_STRINGDATA_04 "LUIGI(ｽﾃｰﾀｽ表示/2P時のﾀｲﾑｱｯﾌﾟ/ｹﾞｰﾑｵｰﾊﾞｰ)"
#define STRING_STRINGDATA_05 "WORLD  TIME(ｽﾃｰﾀｽ)"
#define STRING_STRINGDATA_06 "WORLD(ｲﾝﾄﾛ画面)"
#define STRING_STRINGDATA_07 "TIME UP"
#define STRING_STRINGDATA_08 "GAME OVER"
#define STRING_STRINGDATA_09 "WELCOME TO WARP ZONE!"
#define STRING_STRINGDATA_10 "THANK YOU MARIO!"
#define STRING_STRINGDATA_11 "THANK YOU LUIGI!"
#define STRING_STRINGDATA_12 "BUT OUR PRINCESS IS IN"
#define STRING_STRINGDATA_13 "ANOTHER CASTLE!"
#define STRING_STRINGDATA_14 "YOUR QUEST IS OVER."
#define STRING_STRINGDATA_15 "WE PRESENT YOU A NEW QUEST."
#define STRING_STRINGDATA_16 "PUSH BUTTON B"
#define STRING_STRINGDATA_17 "TO SELECT A WORLD"
#define STRING_STRINGDATA_18 "著作権表示(ﾀｲﾄﾙ画面)"
#define STRING_STRINGDATA_19 "1 PLAYER GAME(ﾀｲﾄﾙ画面)"
#define STRING_STRINGDATA_20 "2 PLAYER GAME(ﾀｲﾄﾙ画面)"


#define STRING_TESTPLAYSETTING_MARIO      "ﾏﾘｵ"
#define STRING_TESTPLAYSETTING_SUPERMARIO "ｽｰﾊﾟｰﾏﾘｵ"
#define STRING_TESTPLAYSETTING_FIREMARIO  "ﾌｧｲｱｰﾏﾘｵ"
#define STRING_TESTPLAYSETTING_NONE       "無効"
#define STRING_TESTPLAYSETTING_POS        "位置"
#define STRING_TESTPLAYSETTING_DOT        "ﾄﾞｯﾄ"

#define STRING_EMULATOROPTION_JOYSTICK   "ｼﾞｮｲｽﾃｨｯｸ"

#define STRING_KEYCONFIG_EMU_A              "Aﾎﾞﾀﾝ"
#define STRING_KEYCONFIG_EMU_B              "Bﾎﾞﾀﾝ"
#define STRING_KEYCONFIG_EMU_SELECT         "ｾﾚｸﾄﾎﾞﾀﾝ"
#define STRING_KEYCONFIG_EMU_START          "ｽﾀｰﾄﾎﾞﾀﾝ"
#define STRING_KEYCONFIG_EMU_UP             "上"
#define STRING_KEYCONFIG_EMU_DOWN           "下"
#define STRING_KEYCONFIG_EMU_LEFT           "左"
#define STRING_KEYCONFIG_EMU_RIGHT          "右"
#define STRING_KEYCONFIG_EDIT_ADD1          "種類を+1"
#define STRING_KEYCONFIG_EDIT_DEC1          "種類を-1"
#define STRING_KEYCONFIG_EDIT_ADD16         "種類を+16"
#define STRING_KEYCONFIG_EDIT_DEC16         "種類を-16"
#define STRING_KEYCONFIG_EDIT_UP            "位置を上へ"
#define STRING_KEYCONFIG_EDIT_DOWN          "位置を下へ"
#define STRING_KEYCONFIG_EDIT_LEFT          "位置を左へ"
#define STRING_KEYCONFIG_EDIT_RIGHT         "位置を右へ"
#define STRING_KEYCONFIG_EDIT_NEXTPAGE      "次のﾍﾟｰｼﾞへ"
#define STRING_KEYCONFIG_EDIT_PREVPAGE      "前のﾍﾟｰｼﾞへ"
#define STRING_KEYCONFIG_EDIT_NEXTOBJ       "次のｵﾌﾞｼﾞｪｸﾄへ"
#define STRING_KEYCONFIG_EDIT_PREVOBJ       "前のｵﾌﾞｼﾞｪｸﾄへ"
#define STRING_KEYCONFIG_EDIT_SAVEFILE      "ﾌｧｲﾙ: 上書き保存"
#define STRING_KEYCONFIG_EDIT_UNDO          "編集: 元に戻す"
#define STRING_KEYCONFIG_EDIT_ROOM          "編集: ﾙｰﾑを開く"
#define STRING_KEYCONFIG_EDIT_BADGUYS       "編集: 敵"
#define STRING_KEYCONFIG_EDIT_MAP           "編集: 地形"
#define STRING_KEYCONFIG_EDIT_TESTPLAY      "ｴﾐｭﾚｰﾀ: ﾃｽﾄﾌﾟﾚｲ"
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY  "ｴﾐｭﾚｰﾀ: ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ"
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY2 "ｴﾐｭﾚｰﾀ: 途中ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ"
#define STRING_KEYCONFIG_EDIT_STOP          "ｴﾐｭﾚｰﾀ: 停止"
#define STRING_KEYCONFIG_EDIT_SAVEEMU       "ｴﾐｭﾚｰﾀ: ｾｰﾌﾞ"
#define STRING_KEYCONFIG_EDIT_LOADEMU       "ｴﾐｭﾚｰﾀ: ﾛｰﾄﾞ"
#define STRING_KEYCONFIG_EDIT_EMUSETTING    "ｴﾐｭﾚｰﾀ: ﾃｽﾄﾌﾟﾚｲの設定"
#define STRING_KEYCONFIG_EDIT_NEXTWIN       "ｳｲﾝﾄﾞｳ: 次へ"
#define STRING_KEYCONFIG_EDIT_PREVWIN       "ｳｲﾝﾄﾞｳ: 前へ"
#define STRING_KEYCONFIG_KEYACCEL           "ｷｰﾎﾞｰﾄﾞｱｸｾﾗﾚｰﾀ"
#define STRING_KEYCONFIG_EMULATOR           "ｴﾐｭﾚｰﾀ"
#define STRING_KEYCONFIG_OVERLAPPED         "%sの\"%s\"と重複しています。"
#define STRING_KEYCONFIG_INITIALIZE         "ﾌﾟﾘｾｯﾄｷｰをﾛｰﾄﾞします。よろしいですか?"
#define STRING_KEYCONFIG_NOTIFY             "次回の起動から有効になります。"

#define STRING_KEYCONFIG_PRESET_DESKTOP     "ﾃﾞｽｸﾄｯﾌﾟ(ﾃﾝｷｰ編集)"
#define STRING_KEYCONFIG_PRESET_NOTE        "ﾉｰﾄ(文字ｷｰ編集)"

#define STRING_KEYCONFIG_WHEEL_NONE         "なし"
#define STRING_KEYCONFIG_WHEEL_SHIFT        "+ｼﾌﾄ"
#define STRING_KEYCONFIG_WHEEL_CTRL         "+ｺﾝﾄﾛｰﾙ"
#define STRING_KEYCONFIG_WHEEL_SHIFTCTRL    "+ｼﾌﾄ+ｺﾝﾄﾛｰﾙ"
#define STRING_KEYCONFIG_WHEEL_TYPE1        "種類を増減1"
#define STRING_KEYCONFIG_WHEEL_TYPE16       "種類を増減16"
#define STRING_KEYCONFIG_WHEEL_PAGE         "ﾍﾟｰｼﾞごとの移動"
#define STRING_KEYCONFIG_WHEEL_OBJ          "ｵﾌﾞｼﾞｪｸﾄごとの移動"

#define STRING_KEYCONFIG_BUTTONX            "ﾎﾞﾀﾝ%d"


#define STRING_OBJLIST_LENNAME   "長さ%dの%s"
#define STRING_OBJLIST_UNKNOWN   "不明なｵﾌﾞｼﾞｪｸﾄ"
#define STRING_OBJLIST_CRASH     "*暴走"
#define STRING_OBJLIST_BACK      "背景:%s"
#define STRING_OBJLIST_VIEWBLOCK "景色:%s ﾌﾞﾛｯｸ:%s"
#define STRING_OBJLIST_ROPE      "縦位置0、長さ13のリフトの縦ロープ"
#define STRING_OBJLIST_LENCASTLE "長さ%dの城"
#define STRING_OBJLIST_STEP      "幅%d・高さ%dの階段"
#define STRING_OBJLIST_STEP98    "幅9・高さ8の階段"
#define STRING_OBJLIST_STEP98_2  "*幅9・高さ8の階段"
#define STRING_OBJLIST_NONE      "*無し"

#define STRING_OBJLIST_ROOM        "ﾙｰﾑ間移動の命令[%.2xH(%s),w=%d,p=%d]"
#define STRING_OBJLIST_PAGECOMMAND "ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞ : %.2d"
#define STRING_OBJLIST_HARD        "（5-3以降出現）"

#define STRING_AREASORT_TITLE "ｴﾘｱの開始ﾙｰﾑの指定"

#define STRING_SEA         "海"
#define STRING_SKY         "地上"
#define STRING_UNDERGROUND "地下"
#define STRING_CASTLE      "城"

#define STRING_OBJLIST_COLUMN_BIN  "ﾊﾞｲﾅﾘ"
#define STRING_OBJLIST_COLUMN_PAGE "ﾍﾟｰｼﾞ"
#define STRING_OBJLIST_COLUMN_POS  "位置"
#define STRING_OBJLIST_COLUMN_TYPE "種類"

#define STRING_OBJDATA_MAP_B_01 "?ﾌﾞﾛｯｸ(ﾊﾟﾜｰｷﾉｺ)"
#define STRING_OBJDATA_MAP_B_02 "?ﾌﾞﾛｯｸ(ｺｲﾝ1枚)"
#define STRING_OBJDATA_MAP_B_03 "隠れﾌﾞﾛｯｸ(ｺｲﾝ1枚)"
#define STRING_OBJDATA_MAP_B_04 "隠れﾌﾞﾛｯｸ(1UPｷﾉｺ)"
#define STRING_OBJDATA_MAP_B_05 "ﾚﾝｶﾞﾌﾞﾛｯｸ(ﾊﾟﾜｰｷﾉｺ)"
#define STRING_OBJDATA_MAP_B_06 "ﾚﾝｶﾞﾌﾞﾛｯｸ(豆の木)"
#define STRING_OBJDATA_MAP_B_07 "ﾚﾝｶﾞﾌﾞﾛｯｸ(ｽﾀｰ)"
#define STRING_OBJDATA_MAP_B_08 "ﾚﾝｶﾞﾌﾞﾛｯｸ(10ｺｲﾝ)"
#define STRING_OBJDATA_MAP_B_09 "ﾚﾝｶﾞﾌﾞﾛｯｸ(1UPｷﾉｺ)"
#define STRING_OBJDATA_MAP_B_10 "横から入る土管"
#define STRING_OBJDATA_MAP_B_11 "使用済みﾌﾞﾛｯｸ"
#define STRING_OBJDATA_MAP_B_12 "ｼﾞｬﾝﾌﾟ台"
#define STRING_OBJDATA_MAP_B_13 "逆L字型土管"
#define STRING_OBJDATA_MAP_B_14 "ﾎﾟｰﾙ"
#define STRING_OBJDATA_MAP_B_15 "*無し"
#define STRING_OBJDATA_MAP_B_16 "*無し"
#define STRING_OBJDATA_MAP_B_17 "ｱｽﾚﾁｯｸ台(砲台)"
#define STRING_OBJDATA_MAP_B_18 "横にならんだﾚﾝｶﾞﾌﾞﾛｯｸ(海草)"
#define STRING_OBJDATA_MAP_B_19 "横にならんだ壊せないﾌﾞﾛｯｸ"
#define STRING_OBJDATA_MAP_B_20 "横にならんだｺｲﾝ列"
#define STRING_OBJDATA_MAP_B_21 "縦にならんだﾚﾝｶﾞﾌﾞﾛｯｸ(海草)"
#define STRING_OBJDATA_MAP_B_22 "縦にならんだ壊せないﾌﾞﾛｯｸ"
#define STRING_OBJDATA_MAP_B_23 "入れない土管"
#define STRING_OBJDATA_MAP_B_24 "入れる土管"

#define STRING_OBJDATA_HELP_B12 "ｷｬﾗｸﾀの１つ。ｷｬﾗｸﾀｵｰﾊﾞｰで表示されなくなると、ﾏﾘｵが挟まって出れなくなるので注意。"
#define STRING_OBJDATA_HELP_B13 "高さ9固定。横からでも上からでも入れる。(横位置＋2)から2ｷｬﾗ分は、先に指定された障害物を消す。"
#define STRING_OBJDATA_HELP_B14 "やたらと使用しないこと。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。"
#define STRING_OBJDATA_HELP_B23 "長さを1にしても必ず2になる。"
//#define STRING_OBJDATA_HELP_B24 "長さを1にしても必ず2になる。"

#define STRING_OBJDATA_MAP_C_01 "穴"
#define STRING_OBJDATA_MAP_C_02 "天秤ﾘﾌﾄの横ﾛｰﾌﾟ"
#define STRING_OBJDATA_MAP_C_03 "吊り橋(縦位置7)"
#define STRING_OBJDATA_MAP_C_04 "吊り橋(縦位置8)"
#define STRING_OBJDATA_MAP_C_05 "吊り橋(縦位置10)"
#define STRING_OBJDATA_MAP_C_06 "海（縦位置10)"
#define STRING_OBJDATA_MAP_C_07 "横に並んだ?ﾌﾞﾛｯｸ(ｺｲﾝ、縦位置3)"
#define STRING_OBJDATA_MAP_C_08 "横に並んだ?ﾌﾞﾛｯｸ(ｺｲﾝ、縦位置7)"

#define STRING_OBJDATA_HELP_C01 "縦位置8から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_C02 "縦位置0固定"
#define STRING_OBJDATA_HELP_C06 "縦位置10から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"

#define STRING_OBJDATA_MAP_D_01 "ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞ"
#define STRING_OBJDATA_MAP_D_02 "逆L字型土管"
#define STRING_OBJDATA_MAP_D_03 "ﾎﾟｰﾙ"
#define STRING_OBJDATA_MAP_D_04 "ﾊﾝﾏｰ"
#define STRING_OBJDATA_MAP_D_05 "斜めのﾛｰﾌﾟ"
#define STRING_OBJDATA_MAP_D_06 "ｸｯﾊﾟの橋"
#define STRING_OBJDATA_MAP_D_07 "画面ｽｸﾛｰﾙをとめる(ﾜｰﾌﾟｿﾞ-ﾝ)"
#define STRING_OBJDATA_MAP_D_08 "画面ｽｸﾛｰﾙをとめる"
//#define STRING_OBJDATA_MAP_D_09 "画面ｽｸﾛｰﾙをとめる"
#define STRING_OBJDATA_MAP_D_10 "赤いﾌﾟｸﾌﾟｸ(空飛び)"
#define STRING_OBJDATA_MAP_D_11 "ｷﾗｰ(ﾌﾟｸﾌﾟｸ)連続"
#define STRING_OBJDATA_MAP_D_12 "連続出現ｷｬﾗを出なくする"
#define STRING_OBJDATA_MAP_D_13 "ﾙｰﾌﾟｺﾏﾝﾄﾞ"
#define STRING_OBJDATA_MAP_D_14 "?"
#define STRING_OBJDATA_MAP_D_15 "*暴走"
//#define STRING_OBJDATA_MAP_D_16 "*暴走"
//#define STRING_OBJDATA_MAP_D_17 "*暴走"

#define STRING_OBJDATA_HELP_D01 "指定ﾍﾟｰｼﾞまでﾏｯﾌﾟを送る。"
#define STRING_OBJDATA_HELP_D03 "やたらと使用しない事。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。"
#define STRING_OBJDATA_HELP_D04 "縦位置6固定、偶数ﾍﾟｰｼﾞに設置しないと橋が落ちない。"
#define STRING_OBJDATA_HELP_D05 "縦位置7固定"
#define STRING_OBJDATA_HELP_D06 "縦位置8、長さ13固定、偶数ﾍﾟｰｼﾞに設置しないと橋が落ちない。"
#define STRING_OBJDATA_HELP_D12 "連続出現ｷｬﾗを出した後、暴走を防ぐためにﾎﾟｰﾙを出す前に指定。"
#define STRING_OBJDATA_HELP_D13 "ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞとｾｯﾄでﾙｰﾌﾟを形成する。"

#define STRING_OBJDATA_MAP_E_01 "基本ﾌﾞﾛｯｸと景色の変更"
#define STRING_OBJDATA_MAP_E_02 "背景の変更"

#define STRING_OBJDATA_MAP_F_01 "ﾘﾌﾄの縦ﾛｰﾌﾟ"
#define STRING_OBJDATA_MAP_F_02 "天秤ﾘﾌﾄの縦ﾛｰﾌﾟ"
#define STRING_OBJDATA_MAP_F_03 "城"
#define STRING_OBJDATA_MAP_F_04 "幅n,高さnの階段"
#define STRING_OBJDATA_MAP_F_05 "幅9、高さ8の階段"
#define STRING_OBJDATA_MAP_F_06 "長い逆L字土管"
#define STRING_OBJDATA_MAP_F_07 "縦に並んだ丸ｷｬﾗ"
#define STRING_OBJDATA_MAP_F_08 "無し"
//#define STRING_OBJDATA_MAP_F_09 "無し"

#define STRING_OBJDATA_HELP_F01 "縦位置0、長さ13固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_F02 "縦位置1固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_F03 "やたらと使用しないこと。多く使用すると暴走しやすくなる。"
#define STRING_OBJDATA_HELP_F05 "長さを0以外に設定すると、後のｴﾘｱの表示がおかしくなります。"
#define STRING_OBJDATA_HELP_F07 "ﾂﾀのようにつかまって上下移動が可能。縦位置2固定"

#define STRING_OBJDATA_BB_01 "ﾌﾞﾛｯｸ無し"
#define STRING_OBJDATA_BB_02 "地面にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_03 "地面と天井にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_04 "地面と天井(3)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_05 "地面と天井(4)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_06 "地面と天井(8)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_07 "地面(4)と天井にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_08 "地面(4)と天井(3)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_09 "地面(4)と天井(4)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_10 "地面(5)と天井にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_11 "天井にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_12 "地面(5)と天井(4)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_13 "地面(8)と天井にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_14 "地面と天井とその間(5)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_15 "地面と天井とその間(4)にﾌﾞﾛｯｸ"
#define STRING_OBJDATA_BB_16 "すべてﾌﾞﾛｯｸ"

#define STRING_OBJDATA_T_01 "無し"
#define STRING_OBJDATA_T_02 "400"
#define STRING_OBJDATA_T_03 "300"
#define STRING_OBJDATA_T_04 "200"

#define STRING_OBJDATA_P_01 "高さ-1、横位置1.5"
#define STRING_OBJDATA_P_02 "ｴﾘｱの始まり：×。他ﾙｰﾑからの移動：高さ-1、横位置1.5"
#define STRING_OBJDATA_P_03 "高さ10、横位置1.5"
#define STRING_OBJDATA_P_04 "高さ4 、横位置1.5"
//#define STRING_OBJDATA_P_05 "高さ-1、横位置1.5"
//#define STRING_OBJDATA_P_06 "高さ-1、横位置1.5"
#define STRING_OBJDATA_P_07 "高さ10、横位置1.5(自動歩行)"
//#define STRING_OBJDATA_P_08 "高さ10、横位置1.5(自動歩行)"

#define STRING_OBJDATA_BC_01 "青空"
#define STRING_OBJDATA_BC_02 "海"
#define STRING_OBJDATA_BC_03 "城壁"
#define STRING_OBJDATA_BC_04 "高さ11の川"
#define STRING_OBJDATA_BC_05 "夜"
#define STRING_OBJDATA_BC_06 "緑色の背景色(土管や山などを白に変更)"
#define STRING_OBJDATA_BC_07 "青い背景色を黒に、緑色の背景色を白に変更"
#define STRING_OBJDATA_BC_08 "青い背景色を黒に、緑色の背景色を白に、茶色を白に変更"

#define STRING_OBJDATA_MT_01 "緑色のｱｽﾚﾁｯｸ面"
#define STRING_OBJDATA_MT_02 "橙色のｱｽﾚﾁｯｸ面"
#define STRING_OBJDATA_MT_03 "大砲面"
#define STRING_OBJDATA_MT_04 "雲面"

#define STRING_OBJDATA_V_01 "無し"
#define STRING_OBJDATA_V_02 "空"
#define STRING_OBJDATA_V_03 "山"
#define STRING_OBJDATA_V_04 "柵のある庭"


#define STRING_OBJDATA_BADGUYS_01 "青いﾉｺﾉｺ"
#define STRING_OBJDATA_BADGUYS_02 "赤いﾉｺﾉｺ"
#define STRING_OBJDATA_BADGUYS_03 "ﾒｯﾄ"
#define STRING_OBJDATA_BADGUYS_04 "赤いﾉｺﾉｺ(往復)"
#define STRING_OBJDATA_BADGUYS_05 "青いﾉｺﾉｺ(停止)"
#define STRING_OBJDATA_BADGUYS_06 "ﾊﾝﾏｰﾌﾞﾛｽ"
#define STRING_OBJDATA_BADGUYS_07 "ｸﾘﾎﾞｰ"
#define STRING_OBJDATA_BADGUYS_08 "ｹﾞｯｿｰ"
#define STRING_OBJDATA_BADGUYS_09 "ｷﾗｰ"
#define STRING_OBJDATA_BADGUYS_10 "青いﾊﾟﾀﾊﾟﾀ(停止)"
#define STRING_OBJDATA_BADGUYS_11 "青いﾌﾟｸﾌﾟｸ(直進)"
#define STRING_OBJDATA_BADGUYS_12 "赤いﾌﾟｸﾌﾟｸ(直進)"
#define STRING_OBJDATA_BADGUYS_13 "ﾊﾞﾌﾞﾙ"
#define STRING_OBJDATA_BADGUYS_14 "ﾊﾟｯｸﾝﾌﾗﾜｰ"
#define STRING_OBJDATA_BADGUYS_15 "青いﾊﾟﾀﾊﾟﾀ(跳ねる)"
#define STRING_OBJDATA_BADGUYS_16 "赤いﾊﾟﾀﾊﾟﾀ(上下)"
#define STRING_OBJDATA_BADGUYS_17 "青いﾊﾟﾀﾊﾟﾀ(左右)"
#define STRING_OBJDATA_BADGUYS_18 "ｼﾞｭｹﾞﾑ"
#define STRING_OBJDATA_BADGUYS_19 "ﾄｹﾞｿﾞｰ(停止)"
#define STRING_OBJDATA_BADGUYS_20 "*ｶﾗｽみたいな赤いﾉｺﾉｺ"
#define STRING_OBJDATA_BADGUYS_21 "赤いﾌﾟｸﾌﾟｸ(空飛、連続)"
#define STRING_OBJDATA_BADGUYS_22 "ｸｯﾊﾟの炎"
#define STRING_OBJDATA_BADGUYS_23 "*暴走"
#define STRING_OBJDATA_BADGUYS_24 "ｷﾗｰ(ﾌﾟｸﾌﾟｸ)連続"
#define STRING_OBJDATA_BADGUYS_25 "*無し"
//#define STRING_OBJDATA_BADGUYS_26 "*無し"
//#define STRING_OBJDATA_BADGUYS_27 "*無し"
#define STRING_OBJDATA_BADGUYS_28 "ﾌｧｲｱｰﾊﾞｰ(右回転)"
#define STRING_OBJDATA_BADGUYS_29 "ﾌｧｲｱｰﾊﾞｰ(右高速回転)"
#define STRING_OBJDATA_BADGUYS_30 "ﾌｧｲｱｰﾊﾞｰ(左回転)"
#define STRING_OBJDATA_BADGUYS_31 "ﾌｧｲｱｰﾊﾞｰ(左高速回転)"
#define STRING_OBJDATA_BADGUYS_32 "ﾛﾝｸﾞﾌｧｲｱｰﾊﾞｰ（右回転)"
#define STRING_OBJDATA_BADGUYS_33 "ﾌｧｲｱｰﾊﾞｰ"
//#define STRING_OBJDATA_BADGUYS_34 "ﾌｧｲｱｰﾊﾞｰ"
//#define STRING_OBJDATA_BADGUYS_35 "ﾌｧｲｱｰﾊﾞｰ"
//#define STRING_OBJDATA_BADGUYS_36 "*無し"
#define STRING_OBJDATA_BADGUYS_37 "ﾘﾌﾄ(天秤)"
#define STRING_OBJDATA_BADGUYS_38 "ﾘﾌﾄ(上下)"
#define STRING_OBJDATA_BADGUYS_39 "ﾘﾌﾄ(上昇)"
#define STRING_OBJDATA_BADGUYS_40 "ﾘﾌﾄ(下降)"
#define STRING_OBJDATA_BADGUYS_41 "ﾘﾌﾄ(左右)"
#define STRING_OBJDATA_BADGUYS_42 "ﾘﾌﾄ(落下)"
#define STRING_OBJDATA_BADGUYS_43 "ﾘﾌﾄ(前進)"
#define STRING_OBJDATA_BADGUYS_44 "小さいﾘﾌﾄ(上昇)"
#define STRING_OBJDATA_BADGUYS_45 "小さいﾘﾌﾄ(下降)"
#define STRING_OBJDATA_BADGUYS_46 "ｸｯﾊﾟ"
#define STRING_OBJDATA_BADGUYS_47 "*生きているｷﾉｺ"
#define STRING_OBJDATA_BADGUYS_48 "*ｷﾉｺの出る音だけ"
//#define STRING_OBJDATA_BADGUYS_49 "*無し"
//#define STRING_OBJDATA_BADGUYS_50 "*無し"
#define STRING_OBJDATA_BADGUYS_51 "にせｼﾞｬﾝﾌﾟ台"
//#define STRING_OBJDATA_BADGUYS_52 "*無し"
#define STRING_OBJDATA_BADGUYS_53 "ﾜｰﾌﾟｿﾞｰﾝ"
#define STRING_OBJDATA_BADGUYS_54 "ｷﾉﾋﾟｵ(ﾋﾟｰﾁ姫)"
//#define STRING_OBJDATA_BADGUYS_55 "*暴走"
#define STRING_OBJDATA_BADGUYS_56 "2体のｸﾘﾎﾞｰ(縦位置10)"
#define STRING_OBJDATA_BADGUYS_57 "3体のｸﾘﾎﾞｰ(縦位置10)"
#define STRING_OBJDATA_BADGUYS_58 "2体のｸﾘﾎﾞｰ(縦位置6)"
#define STRING_OBJDATA_BADGUYS_59 "3体のｸﾘﾎﾞｰ(縦位置6)"
#define STRING_OBJDATA_BADGUYS_60 "2体の青いﾉｺﾉｺ(縦位置10)"
#define STRING_OBJDATA_BADGUYS_61 "3体の青いﾉｺﾉｺ(縦位置10)"
#define STRING_OBJDATA_BADGUYS_62 "2体の青いﾉｺﾉｺ(縦位置6)"
#define STRING_OBJDATA_BADGUYS_63 "3体の青いﾉｺﾉｺ(縦位置6)"
//#define STRING_OBJDATA_BADGUYS_64 "*無し"

// delreg.exe
#define STRING_DELREG_TITLE    "SMB Utility ﾚｼﾞｽﾄﾘの削除"
#define STRING_DELREG_CONFIRM  "SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しますか？"
#define STRING_DELREG_COMPLETE "SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しました。"
#define STRING_DELREG_ERROR_01 "SMB Utilityのﾚｼﾞｽﾄﾘのｷｰは、存在しません。"

#endif
