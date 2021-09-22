///*
//PROBLEM STATEMENT:
//Given two strings S and T of length n and m respectively.
//find count of distinct occurrences of T in S as a sub-sequence.
//*/
//#include <bits/stdc++.h>
//
//using namespace std;
//#define int long long
//
//const int mod = 1000000007;
//
//int solve(string &S, string &T) {
//    int m = S.length();
//    int n = T.length();
//    int dp[m + 1][n + 1];
//
//    for (int i = 0; i < n + 1; i++) {
//        dp[0][i] = 0;
//    }
//
//    for (int i = 0; i < m + 1; i++) {
//        dp[i][0] = 1;
//    }
//
//    for (int i = 1; i < m + 1; i++) {
//        for (int j = 1; j < n + 1; j++) {
//            if (S[i - 1] == T[j - 1]) {
//                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
//            } else {
//                dp[i][j] = (dp[i - 1][j]) % mod;
//            }
//        }
//    }
//    return dp[m][n];
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//    string S;
//    string T;
//    while (t--) {
//        cin >> S;
//        cin >> T;
//        cout << "\ncount of distinct occurrences of T in S as a sub-sequence is : " << solve(S, T) << endl;
//    }
//}
//
///*
//INPUT:
//3
//banana ban
//geeksforgeeks ge
//qghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvsrtkjprepggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxfxtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipyamyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknlyjyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiuteiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhdizcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxohgmgnkeufdxotogbgxpeyanfetcukepzshkljugggekjdqzjenpevqgxiepjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrsrtekmqdcyzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdzqsoemuvnpppsuacbazuxmhecthlegrpunkdmbppweqtgjoparmowzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnbnfuvqnqqlrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdigpnpuuhgxpqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcnockvfajfrmxothowkbjzwucwljfrimpmyhchzriwkbarxbgfcbceyhjugixwtbvtrehbbcpxifbxvfbcgkcfqckcotzgkubmjrmbsztsshfroefwsjrxjhguzyupzwweiqurpixiqflduuveoowqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzeztoidukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxamceroswitdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycdrudmphmeckotrwospofghfozqvlqfxwwkmfxdyygmdcaszsgovsodkjghcwmbmxrmhuyfyqgajqkcklznayxqkqoyzwmyubzazcpkhktkydzivcuypurfmbisgekyrgzvxdhpoamvafyrarxsvkhtqdihersigbhzjzujxmmyspnaraewkegjccvhhrjvbjtsqdjootgpknfpfycgfieowqrwwwpzsqmetogepspxnvjiupalyynmkmnuvklhsecdwracgfmzkgipdfodkjmjqwiqpuoqhimvfvuzwyvijgfullkjduhsjafbtlkmfqrmyjfjnhhssqctydteamdcjbprhtnegyiwxgcjwlgrsmeaearwtvjsjbaoiojlwhypnvruihoswkifygtydhacwyhsgewzmtgonzltjhgauhnihreqgjfwkjsmtpjhaefqzaauldrchjccdyrfvvrivuyeegfivdrcygurqdredakubnfguproqylobcwqxkzmausjgmhcmhgdnmphnqkamhurktrffaclvgrzkkldacllteojomonxrqyjzginrnnzwacxxaedrwudxzrfusewjtboxvynfhkstcenaumnddxfdmvzcautdcckxaaydzsxttobbgqngvvpjgojoglmkxgbfcpypckqchbddzwrxbzmqrlxvobtwhxginfgfrcclmznmjugwwbsqfcihubsjollmsqsghmcphelsotflbgsfnpcuzsrupchynvzhcpqugriwniqxdfjpwpxfblkpnpeelfjmtkuqpzomwnlmbupmktlptndmpdsydsgvfpenemwborifsuqhceskmkhssmvnonwafxwhgbibabvqopqfoviussqfqwehtxdzujtlntxmrjxxwtlggkytbiolydnilqadojskkvfxahhjmbocljarintdwcldvdxropbyjzwyyojuothwmlvrglfzdzdbtubxuoffvncrswsaznmoijoivvgobqpnckwvnhkebmtdhvygkjisuxhatmuudqbhmknhfxaxqxkjlzzqtsjfaeedfuujkolxjoqkdvfepvlhvhrwtfdukxffjpsswyxlijjhevryxozbafpfmowgrgonuatdqlahyggyljddjhmltedzlodsrkeutgtnkntarjkpxinovgzdthunwooxvjjmpsvknhkwjopmmlebksucvzqlyqnwcmbvbhrmlowpjbwyvwtgtoqnmicxapzarknnxtuufarzrosdqwsmtcjghecqudosrtjxyaaykqrxycrxuwjxnpqjnbkcpdmokalxapemvbqlzsvxzkutappwgzpdpyzkzcvbntcvfxsxpjaoxtfhvxxytgokrcxaetauqgndmphwzyiayabjrqgeppxyjsttyzuvldvybsuxkbmfzvrtnovidznpghozvafmsnsnqivmvubcwtfsrqtmknepbhowejazhkwcmmtpixxxlzqysxtwwtaidyaxyqleprxibexxyfvsddygthcuyyfwpjsfybglgzmbintattnhodtonpyzwotkgnguphpkxeatowzabsdnvqhkfcmofisfrfqgvpmvorpjfzslzmpjjnehrykxjzubuacclfkcyzobghtuoxrajvprecwgxxpswcgmmvedewdmfnqwcuqdsciliqecihluilgmfcswtwkkxlcbhqkvcswjebkrjlpgfgratzbsguvzifnhyxwjsjavwauxpannamxjdvzuhnaczyhepwzolhuslrkvwpnvgzmiizwudwdfzlktbqdxgyyiudsjvezkmesbjlkyertahnexhuqmjicbmusqdklasolwjxptxxeumzfwyucpabqseffunqpkfnnbecbbcjpdyjlibitllplxelrdkexdtquvptteyhtlqlbbbvoqozkynayyrbaqmyjhzxndsiyfsexwbioewqvqrtcdlpqmvjifvgymkgotzjmnzqtmrpndevnmthjitsspaqnjrdoyjwpyatmleyqsvkpamsvbmvxrllivfedkjigavyxjveqvrbacuigaipyhbbxipbzncwhrblirizxoqptqqweaafjeqiozpyfauuqmvhxkmnxmsyamptlzanotlslwuhtfqjrrwbwhmqhzkhdkcrfvbeiyipvfvpzhyujabtqwwtbkdogkemhibyxrnxsxrzletbqexkrqoiernaplqyjpqoubvjsebalwnksvloidzfpirwycztwzzvewxotakudkpedupkczlhwuskdnevdcplbklpjmpfdcyqtrcvvvtrffvpekkqmcupryjauteuvczvicthrxsxclprgdlwxfaigayrueicufdiamhtkbxotdirxxgvzqmeyrovfichqnivfjzauqfdftgmopsrgpugxtuhlcvspihazrssfszwxbqm rwmxcdbhumrgjqmvnkyrtn
//
//OUTPUT:
//count of distinct occurrences of T in S as a sub-sequence is : 3
//
//count of distinct occurrences of T in S as a sub-sequence is : 6
//
//count of distinct occurrences of T in S as a sub-sequence is : 470429762
//*/