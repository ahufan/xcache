/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf src/confitems.gperf  */
/* Computed positions: -k'1,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 8 "src/confitems.gperf"
struct conf_item;
/* maximum key range = 58, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
confitems_hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62,  5, 15,
      45,  0, 10, 62,  0,  5, 62, 25, 25, 20,
      10, 62,  0, 62,  0,  0, 30, 10, 62, 62,
      62,  0, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]];
}

static
#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct conf_item *
confitems_get (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 35,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 26,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 61
    };

  static const struct conf_item wordlist[] =
    {
      {"",0,NULL,0,NULL}, {"",0,NULL,0,NULL},
      {"",0,NULL,0,NULL}, {"",0,NULL,0,NULL},
#line 31 "src/confitems.gperf"
      {"path",                21, ITEM(path, env_string)},
#line 41 "src/confitems.gperf"
      {"stats",               31, ITEM(stats, bool)},
      {"",0,NULL,0,NULL},
#line 38 "src/confitems.gperf"
      {"recache",             28, ITEM(recache, bool)},
#line 22 "src/confitems.gperf"
      {"hash_dir",            12, ITEM(hash_dir, bool)},
#line 35 "src/confitems.gperf"
      {"read_only",           25, ITEM(read_only, bool)},
#line 40 "src/confitems.gperf"
      {"sloppiness",          30, ITEM(sloppiness, sloppiness)},
#line 30 "src/confitems.gperf"
      {"remote_only",         20, ITEM(remote_only, bool)},
      {"",0,NULL,0,NULL},
#line 10 "src/confitems.gperf"
      {"base_dir",             0, ITEM_V(base_dir, env_string, absolute_path)},
#line 39 "src/confitems.gperf"
      {"run_second_cpp",      29, ITEM(run_second_cpp, bool)},
#line 44 "src/confitems.gperf"
      {"unify",               34, ITEM(unify, bool)},
#line 37 "src/confitems.gperf"
      {"read_only_remote",    27, ITEM(read_only_remote, bool)},
      {"",0,NULL,0,NULL},
#line 34 "src/confitems.gperf"
      {"prefix_command_cpp",  24, ITEM(prefix_command_cpp, env_string)},
#line 20 "src/confitems.gperf"
      {"extra_files_to_hash", 10, ITEM(extra_files_to_hash, env_string)},
      {"",0,NULL,0,NULL},
#line 29 "src/confitems.gperf"
      {"remote_conf",         19, ITEM(remote_conf, string)},
      {"",0,NULL,0,NULL},
#line 13 "src/confitems.gperf"
      {"compiler",             3, ITEM(compiler, string)},
#line 11 "src/confitems.gperf"
      {"cache_dir",            1, ITEM(cache_dir, env_string)},
      {"",0,NULL,0,NULL}, {"",0,NULL,0,NULL},
      {"",0,NULL,0,NULL},
#line 28 "src/confitems.gperf"
      {"max_size",            18, ITEM(max_size, size)},
#line 27 "src/confitems.gperf"
      {"max_files",           17, ITEM(max_files, unsigned)},
      {"",0,NULL,0,NULL},
#line 12 "src/confitems.gperf"
      {"cache_dir_levels",     2, ITEM_V(cache_dir_levels, unsigned, dir_levels)},
      {"",0,NULL,0,NULL},
#line 26 "src/confitems.gperf"
      {"log_file",            16, ITEM(log_file, env_string)},
#line 21 "src/confitems.gperf"
      {"hard_link",           11, ITEM(hard_link, bool)},
      {"",0,NULL,0,NULL},
#line 15 "src/confitems.gperf"
      {"compression",          5, ITEM(compression, bool)},
      {"",0,NULL,0,NULL},
#line 17 "src/confitems.gperf"
      {"cpp_extension",        7, ITEM(cpp_extension, string)},
#line 25 "src/confitems.gperf"
      {"limit_multiple",      15, ITEM(limit_multiple, float)},
#line 43 "src/confitems.gperf"
      {"umask",               33, ITEM(umask, umask)},
#line 32 "src/confitems.gperf"
      {"pch_external_checksum", 22, ITEM(pch_external_checksum, bool)},
#line 24 "src/confitems.gperf"
      {"keep_comments_cpp",   14, ITEM(keep_comments_cpp, bool)},
#line 42 "src/confitems.gperf"
      {"temporary_dir",       32, ITEM(temporary_dir, env_string)},
      {"",0,NULL,0,NULL}, {"",0,NULL,0,NULL},
#line 36 "src/confitems.gperf"
      {"read_only_direct",    26, ITEM(read_only_direct, bool)},
      {"",0,NULL,0,NULL}, {"",0,NULL,0,NULL},
      {"",0,NULL,0,NULL}, {"",0,NULL,0,NULL},
      {"",0,NULL,0,NULL},
#line 19 "src/confitems.gperf"
      {"disable",              9, ITEM(disable, bool)},
      {"",0,NULL,0,NULL},
#line 14 "src/confitems.gperf"
      {"compiler_check",       4, ITEM(compiler_check, string)},
      {"",0,NULL,0,NULL},
#line 18 "src/confitems.gperf"
      {"direct_mode",          8, ITEM(direct_mode, bool)},
#line 16 "src/confitems.gperf"
      {"compression_level",    6, ITEM(compression_level, unsigned)},
      {"",0,NULL,0,NULL},
#line 33 "src/confitems.gperf"
      {"prefix_command",      23, ITEM(prefix_command, env_string)},
      {"",0,NULL,0,NULL},
#line 23 "src/confitems.gperf"
      {"ignore_headers_in_manifest", 13, ITEM(ignore_headers_in_manifest, env_string)}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = confitems_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
static const size_t CONFITEMS_TOTAL_KEYWORDS = 35;
