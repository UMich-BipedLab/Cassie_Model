/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:08 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t2389;
  double t2397;
  double t2398;
  double t2387;
  double t2399;
  double t2361;
  double t2396;
  double t2401;
  double t2413;
  double t2417;
  double t2418;
  double t2421;
  double t2422;
  double t2438;
  double t2447;
  double t2451;
  double t2453;
  double t2433;
  double t2435;
  double t2436;
  double t2458;
  double t2486;
  double t2489;
  double t2491;
  double t2495;
  double t2478;
  double t2480;
  double t2482;
  double t2499;
  double t2500;
  double t2501;
  double t2508;
  double t2509;
  double t2510;
  double t2513;
  double t2517;
  double t2519;
  double t2520;
  double t2531;
  double t2532;
  double t2533;
  double t2362;
  double t2372;
  double t2384;
  double t2386;
  double t2430;
  double t2431;
  double t2547;
  double t2548;
  double t2549;
  double t2551;
  double t2552;
  double t2553;
  double t2452;
  double t2454;
  double t2456;
  double t2460;
  double t2461;
  double t2466;
  double t2555;
  double t2556;
  double t2557;
  double t2492;
  double t2496;
  double t2497;
  double t2502;
  double t2503;
  double t2505;
  double t2511;
  double t2514;
  double t2515;
  double t2567;
  double t2568;
  double t2569;
  double t2572;
  double t2573;
  double t2576;
  double t2523;
  double t2525;
  double t2527;
  double t2578;
  double t2579;
  double t2580;
  double t2582;
  double t2583;
  double t2584;
  double t2597;
  double t2598;
  double t2599;
  double t2606;
  double t2607;
  double t2608;
  double t2610;
  double t2611;
  double t2612;
  double t2614;
  double t2615;
  double t2616;
  double t2618;
  double t2619;
  double t2620;
  double t2633;
  double t2634;
  double t2635;
  double t2642;
  double t2643;
  double t2644;
  double t2646;
  double t2647;
  double t2648;
  double t2650;
  double t2651;
  double t2652;
  double t2654;
  double t2655;
  double t2656;
  double t2669;
  double t2670;
  double t2671;
  double t2678;
  double t2679;
  double t2680;
  double t2682;
  double t2683;
  double t2684;
  double t2686;
  double t2687;
  double t2688;
  double t2690;
  double t2691;
  double t2692;
  double t2704;
  double t2705;
  double t2706;
  double t2708;
  double t2709;
  double t2713;
  double t2714;
  double t2715;
  double t2717;
  double t2718;
  double t2719;
  double t2721;
  double t2722;
  double t2723;
  double t2734;
  double t2735;
  double t2736;
  double t2739;
  double t2740;
  double t2741;
  double t2745;
  double t2746;
  double t2748;
  double t2749;
  double t2750;
  double t2752;
  double t2753;
  double t2754;
  double t2767;
  double t2768;
  double t2769;
  double t2773;
  double t2774;
  double t2775;
  double t2777;
  double t2778;
  double t2779;
  double t2781;
  double t2782;
  double t2783;
  double t2799;
  double t2800;
  double t2802;
  double t2803;
  double t2804;
  double t2806;
  double t2807;
  double t2808;
  double t2820;
  double t2821;
  double t2822;
  double t2824;
  double t2825;
  double t2829;
  double t2830;
  double t2832;
  double t2833;
  double t2834;
  double t2836;
  double t2837;
  double t2838;
  double t2770;
  double t2771;
  double t2772;
  double t2776;
  double t2780;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2788;
  double t2789;
  double t2790;
  double t2791;
  double t2792;
  double t2560;
  double t2562;
  double t2564;
  double t2852;
  double t2853;
  double t2854;
  double t2856;
  double t2857;
  double t2876;
  double t2877;
  double t2878;
  double t2880;
  double t2881;
  double t2882;
  double t2899;
  double t2900;
  double t2901;
  double t2903;
  double t2904;
  double t2905;
  double t2929;
  double t2930;
  double t2931;
  double t2587;
  double t2922;
  double t2923;
  double t2925;
  double t2926;
  double t2927;
  double t2943;
  double t2944;
  double t2945;
  double t2947;
  double t2948;
  double t2949;
  double t2951;
  double t2952;
  double t2953;
  double t2965;
  double t2966;
  double t2967;
  double t2969;
  double t2970;
  double t2971;
  double t2973;
  double t2974;
  double t2975;
  double t2586;
  double t2588;
  double t2938;
  double t2986;
  double t2987;
  double t2988;
  double t2990;
  double t2991;
  double t2998;
  double t2999;
  double t3000;
  double t2956;
  double t2960;
  double t3010;
  double t3011;
  double t3012;
  double t2978;
  double t2982;
  t2389 = Cos(var1[5]);
  t2397 = Sin(var1[3]);
  t2398 = Sin(var1[4]);
  t2387 = Cos(var1[3]);
  t2399 = Sin(var1[5]);
  t2361 = Cos(var1[6]);
  t2396 = -1.*t2387*t2389;
  t2401 = -1.*t2397*t2398*t2399;
  t2413 = t2396 + t2401;
  t2417 = -1.*t2389*t2397*t2398;
  t2418 = t2387*t2399;
  t2421 = t2417 + t2418;
  t2422 = Sin(var1[6]);
  t2438 = Cos(var1[7]);
  t2447 = -1.*t2438;
  t2451 = 1. + t2447;
  t2453 = Sin(var1[7]);
  t2433 = t2361*t2413;
  t2435 = t2421*t2422;
  t2436 = t2433 + t2435;
  t2458 = Cos(var1[4]);
  t2486 = Cos(var1[8]);
  t2489 = -1.*t2486;
  t2491 = 1. + t2489;
  t2495 = Sin(var1[8]);
  t2478 = -1.*t2458*t2438*t2397;
  t2480 = t2436*t2453;
  t2482 = t2478 + t2480;
  t2499 = t2361*t2421;
  t2500 = -1.*t2413*t2422;
  t2501 = t2499 + t2500;
  t2508 = Cos(var1[9]);
  t2509 = -1.*t2508;
  t2510 = 1. + t2509;
  t2513 = Sin(var1[9]);
  t2517 = t2486*t2482;
  t2519 = t2501*t2495;
  t2520 = t2517 + t2519;
  t2531 = t2486*t2501;
  t2532 = -1.*t2482*t2495;
  t2533 = t2531 + t2532;
  t2362 = -1.*t2361;
  t2372 = 1. + t2362;
  t2384 = 0.135*t2372;
  t2386 = 0. + t2384;
  t2430 = -0.135*t2422;
  t2431 = 0. + t2430;
  t2547 = -1.*t2389*t2397;
  t2548 = t2387*t2398*t2399;
  t2549 = t2547 + t2548;
  t2551 = t2387*t2389*t2398;
  t2552 = t2397*t2399;
  t2553 = t2551 + t2552;
  t2452 = 0.135*t2451;
  t2454 = 0.049*t2453;
  t2456 = 0. + t2452 + t2454;
  t2460 = -0.049*t2451;
  t2461 = 0.135*t2453;
  t2466 = 0. + t2460 + t2461;
  t2555 = t2361*t2549;
  t2556 = t2553*t2422;
  t2557 = t2555 + t2556;
  t2492 = -0.049*t2491;
  t2496 = -0.09*t2495;
  t2497 = 0. + t2492 + t2496;
  t2502 = -0.09*t2491;
  t2503 = 0.049*t2495;
  t2505 = 0. + t2502 + t2503;
  t2511 = -0.049*t2510;
  t2514 = -0.21*t2513;
  t2515 = 0. + t2511 + t2514;
  t2567 = t2387*t2458*t2438;
  t2568 = t2557*t2453;
  t2569 = t2567 + t2568;
  t2572 = t2361*t2553;
  t2573 = -1.*t2549*t2422;
  t2576 = t2572 + t2573;
  t2523 = -0.21*t2510;
  t2525 = 0.049*t2513;
  t2527 = 0. + t2523 + t2525;
  t2578 = t2486*t2569;
  t2579 = t2576*t2495;
  t2580 = t2578 + t2579;
  t2582 = t2486*t2576;
  t2583 = -1.*t2569*t2495;
  t2584 = t2582 + t2583;
  t2597 = t2387*t2458*t2361*t2399;
  t2598 = t2387*t2458*t2389*t2422;
  t2599 = t2597 + t2598;
  t2606 = -1.*t2387*t2438*t2398;
  t2607 = t2599*t2453;
  t2608 = t2606 + t2607;
  t2610 = t2387*t2458*t2389*t2361;
  t2611 = -1.*t2387*t2458*t2399*t2422;
  t2612 = t2610 + t2611;
  t2614 = t2486*t2608;
  t2615 = t2612*t2495;
  t2616 = t2614 + t2615;
  t2618 = t2486*t2612;
  t2619 = -1.*t2608*t2495;
  t2620 = t2618 + t2619;
  t2633 = t2458*t2361*t2397*t2399;
  t2634 = t2458*t2389*t2397*t2422;
  t2635 = t2633 + t2634;
  t2642 = -1.*t2438*t2397*t2398;
  t2643 = t2635*t2453;
  t2644 = t2642 + t2643;
  t2646 = t2458*t2389*t2361*t2397;
  t2647 = -1.*t2458*t2397*t2399*t2422;
  t2648 = t2646 + t2647;
  t2650 = t2486*t2644;
  t2651 = t2648*t2495;
  t2652 = t2650 + t2651;
  t2654 = t2486*t2648;
  t2655 = -1.*t2644*t2495;
  t2656 = t2654 + t2655;
  t2669 = -1.*t2361*t2398*t2399;
  t2670 = -1.*t2389*t2398*t2422;
  t2671 = t2669 + t2670;
  t2678 = -1.*t2458*t2438;
  t2679 = t2671*t2453;
  t2680 = t2678 + t2679;
  t2682 = -1.*t2389*t2361*t2398;
  t2683 = t2398*t2399*t2422;
  t2684 = t2682 + t2683;
  t2686 = t2486*t2680;
  t2687 = t2684*t2495;
  t2688 = t2686 + t2687;
  t2690 = t2486*t2684;
  t2691 = -1.*t2680*t2495;
  t2692 = t2690 + t2691;
  t2704 = t2389*t2397;
  t2705 = -1.*t2387*t2398*t2399;
  t2706 = t2704 + t2705;
  t2708 = t2706*t2422;
  t2709 = t2572 + t2708;
  t2713 = t2361*t2706;
  t2714 = -1.*t2553*t2422;
  t2715 = t2713 + t2714;
  t2717 = t2486*t2709*t2453;
  t2718 = t2715*t2495;
  t2719 = t2717 + t2718;
  t2721 = t2486*t2715;
  t2722 = -1.*t2709*t2453*t2495;
  t2723 = t2721 + t2722;
  t2734 = t2389*t2397*t2398;
  t2735 = -1.*t2387*t2399;
  t2736 = t2734 + t2735;
  t2739 = t2361*t2736;
  t2740 = t2413*t2422;
  t2741 = t2739 + t2740;
  t2745 = -1.*t2736*t2422;
  t2746 = t2433 + t2745;
  t2748 = t2486*t2741*t2453;
  t2749 = t2746*t2495;
  t2750 = t2748 + t2749;
  t2752 = t2486*t2746;
  t2753 = -1.*t2741*t2453*t2495;
  t2754 = t2752 + t2753;
  t2767 = t2458*t2389*t2361;
  t2768 = -1.*t2458*t2399*t2422;
  t2769 = t2767 + t2768;
  t2773 = -1.*t2458*t2361*t2399;
  t2774 = -1.*t2458*t2389*t2422;
  t2775 = t2773 + t2774;
  t2777 = t2486*t2769*t2453;
  t2778 = t2775*t2495;
  t2779 = t2777 + t2778;
  t2781 = t2486*t2775;
  t2782 = -1.*t2769*t2453*t2495;
  t2783 = t2781 + t2782;
  t2799 = -1.*t2361*t2549;
  t2800 = t2799 + t2714;
  t2802 = t2486*t2576*t2453;
  t2803 = t2800*t2495;
  t2804 = t2802 + t2803;
  t2806 = t2486*t2800;
  t2807 = -1.*t2576*t2453*t2495;
  t2808 = t2806 + t2807;
  t2820 = t2387*t2389;
  t2821 = t2397*t2398*t2399;
  t2822 = t2820 + t2821;
  t2824 = -1.*t2822*t2422;
  t2825 = t2739 + t2824;
  t2829 = -1.*t2361*t2822;
  t2830 = t2829 + t2745;
  t2832 = t2486*t2825*t2453;
  t2833 = t2830*t2495;
  t2834 = t2832 + t2833;
  t2836 = t2486*t2830;
  t2837 = -1.*t2825*t2453*t2495;
  t2838 = t2836 + t2837;
  t2770 = 0.1305*t2438*t2769;
  t2771 = t2769*t2456;
  t2772 = t2769*t2453*t2497;
  t2776 = t2775*t2505;
  t2780 = t2515*t2779;
  t2784 = t2527*t2783;
  t2785 = -1.*t2513*t2779;
  t2786 = t2508*t2783;
  t2787 = t2785 + t2786;
  t2788 = -0.2707*t2787;
  t2789 = t2508*t2779;
  t2790 = t2513*t2783;
  t2791 = t2789 + t2790;
  t2792 = -0.0016*t2791;
  t2560 = t2438*t2557;
  t2562 = -1.*t2387*t2458*t2453;
  t2564 = t2560 + t2562;
  t2852 = 0.135*t2438;
  t2853 = -0.049*t2453;
  t2854 = t2852 + t2853;
  t2856 = 0.049*t2438;
  t2857 = t2856 + t2461;
  t2876 = t2361*t2822;
  t2877 = t2736*t2422;
  t2878 = t2876 + t2877;
  t2880 = t2438*t2878;
  t2881 = -1.*t2458*t2397*t2453;
  t2882 = t2880 + t2881;
  t2899 = t2458*t2361*t2399;
  t2900 = t2458*t2389*t2422;
  t2901 = t2899 + t2900;
  t2903 = t2438*t2901;
  t2904 = t2398*t2453;
  t2905 = t2903 + t2904;
  t2929 = -1.*t2486*t2569;
  t2930 = -1.*t2576*t2495;
  t2931 = t2929 + t2930;
  t2587 = t2508*t2584;
  t2922 = 0.049*t2486;
  t2923 = t2922 + t2496;
  t2925 = -0.09*t2486;
  t2926 = -0.049*t2495;
  t2927 = t2925 + t2926;
  t2943 = t2458*t2438*t2397;
  t2944 = t2878*t2453;
  t2945 = t2943 + t2944;
  t2947 = -1.*t2486*t2945;
  t2948 = -1.*t2825*t2495;
  t2949 = t2947 + t2948;
  t2951 = t2486*t2825;
  t2952 = -1.*t2945*t2495;
  t2953 = t2951 + t2952;
  t2965 = -1.*t2438*t2398;
  t2966 = t2901*t2453;
  t2967 = t2965 + t2966;
  t2969 = -1.*t2486*t2967;
  t2970 = -1.*t2769*t2495;
  t2971 = t2969 + t2970;
  t2973 = t2486*t2769;
  t2974 = -1.*t2967*t2495;
  t2975 = t2973 + t2974;
  t2586 = -1.*t2513*t2580;
  t2588 = t2586 + t2587;
  t2938 = -1.*t2513*t2584;
  t2986 = -0.21*t2508;
  t2987 = -0.049*t2513;
  t2988 = t2986 + t2987;
  t2990 = 0.049*t2508;
  t2991 = t2990 + t2514;
  t2998 = t2486*t2945;
  t2999 = t2825*t2495;
  t3000 = t2998 + t2999;
  t2956 = t2508*t2953;
  t2960 = -1.*t2513*t2953;
  t3010 = t2486*t2967;
  t3011 = t2769*t2495;
  t3012 = t3010 + t3011;
  t2978 = t2508*t2975;
  t2982 = -1.*t2513*t2975;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2386*t2413 + t2421*t2431 + t2436*t2456 + 0.1305*(t2436*t2438 + t2397*t2453*t2458) - 1.*t2397*t2458*t2466 + t2482*t2497 + t2501*t2505 + t2515*t2520 + t2527*t2533 - 0.2707*(-1.*t2513*t2520 + t2508*t2533) - 0.0016*(t2508*t2520 + t2513*t2533);
  p_output1[10]=t2387*t2458*t2466 + t2386*t2549 + t2431*t2553 + t2456*t2557 + 0.1305*t2564 + t2497*t2569 + t2505*t2576 + t2515*t2580 + t2527*t2584 - 0.0016*(t2508*t2580 + t2513*t2584) - 0.2707*t2588;
  p_output1[11]=0;
  p_output1[12]=t2386*t2387*t2399*t2458 + t2387*t2389*t2431*t2458 - 1.*t2387*t2398*t2466 + t2456*t2599 + 0.1305*(t2387*t2398*t2453 + t2438*t2599) + t2497*t2608 + t2505*t2612 + t2515*t2616 + t2527*t2620 - 0.2707*(-1.*t2513*t2616 + t2508*t2620) - 0.0016*(t2508*t2616 + t2513*t2620);
  p_output1[13]=t2386*t2397*t2399*t2458 + t2389*t2397*t2431*t2458 - 1.*t2397*t2398*t2466 + t2456*t2635 + 0.1305*(t2397*t2398*t2453 + t2438*t2635) + t2497*t2644 + t2505*t2648 + t2515*t2652 + t2527*t2656 - 0.2707*(-1.*t2513*t2652 + t2508*t2656) - 0.0016*(t2508*t2652 + t2513*t2656);
  p_output1[14]=-1.*t2386*t2398*t2399 - 1.*t2389*t2398*t2431 - 1.*t2458*t2466 + t2456*t2671 + 0.1305*(t2453*t2458 + t2438*t2671) + t2497*t2680 + t2505*t2684 + t2515*t2688 + t2527*t2692 - 0.2707*(-1.*t2513*t2688 + t2508*t2692) - 0.0016*(t2508*t2688 + t2513*t2692);
  p_output1[15]=t2386*t2553 + t2431*t2706 + 0.1305*t2438*t2709 + t2456*t2709 + t2453*t2497*t2709 + t2505*t2715 + t2515*t2719 + t2527*t2723 - 0.2707*(-1.*t2513*t2719 + t2508*t2723) - 0.0016*(t2508*t2719 + t2513*t2723);
  p_output1[16]=t2413*t2431 + t2386*t2736 + 0.1305*t2438*t2741 + t2456*t2741 + t2453*t2497*t2741 + t2505*t2746 + t2515*t2750 + t2527*t2754 - 0.2707*(-1.*t2513*t2750 + t2508*t2754) - 0.0016*(t2508*t2750 + t2513*t2754);
  p_output1[17]=t2386*t2389*t2458 - 1.*t2399*t2431*t2458 + t2770 + t2771 + t2772 + t2776 + t2780 + t2784 + t2788 + t2792;
  p_output1[18]=0.135*t2422*t2549 - 0.135*t2361*t2553 + 0.1305*t2438*t2576 + t2456*t2576 + t2453*t2497*t2576 + t2505*t2800 + t2515*t2804 + t2527*t2808 - 0.2707*(-1.*t2513*t2804 + t2508*t2808) - 0.0016*(t2508*t2804 + t2513*t2808);
  p_output1[19]=-0.135*t2361*t2736 + 0.135*t2422*t2822 + 0.1305*t2438*t2825 + t2456*t2825 + t2453*t2497*t2825 + t2505*t2830 + t2515*t2834 + t2527*t2838 - 0.2707*(-1.*t2513*t2834 + t2508*t2838) - 0.0016*(t2508*t2834 + t2513*t2838);
  p_output1[20]=-0.135*t2361*t2389*t2458 + 0.135*t2399*t2422*t2458 + t2770 + t2771 + t2772 + t2776 + t2780 + t2784 + t2788 + t2792;
  p_output1[21]=0.1305*(-1.*t2387*t2438*t2458 - 1.*t2453*t2557) + t2497*t2564 + t2486*t2515*t2564 - 1.*t2495*t2527*t2564 - 0.2707*(-1.*t2495*t2508*t2564 - 1.*t2486*t2513*t2564) - 0.0016*(t2486*t2508*t2564 - 1.*t2495*t2513*t2564) + t2387*t2458*t2854 + t2557*t2857;
  p_output1[22]=t2397*t2458*t2854 + t2857*t2878 + 0.1305*(t2478 - 1.*t2453*t2878) + t2497*t2882 + t2486*t2515*t2882 - 1.*t2495*t2527*t2882 - 0.2707*(-1.*t2495*t2508*t2882 - 1.*t2486*t2513*t2882) - 0.0016*(t2486*t2508*t2882 - 1.*t2495*t2513*t2882);
  p_output1[23]=-1.*t2398*t2854 + t2857*t2901 + 0.1305*(t2398*t2438 - 1.*t2453*t2901) + t2497*t2905 + t2486*t2515*t2905 - 1.*t2495*t2527*t2905 - 0.2707*(-1.*t2495*t2508*t2905 - 1.*t2486*t2513*t2905) - 0.0016*(t2486*t2508*t2905 - 1.*t2495*t2513*t2905);
  p_output1[24]=t2515*t2584 + t2576*t2923 + t2569*t2927 + t2527*t2931 - 0.0016*(t2587 + t2513*t2931) - 0.2707*(t2508*t2931 + t2938);
  p_output1[25]=t2825*t2923 + t2927*t2945 + t2527*t2949 + t2515*t2953 - 0.0016*(t2513*t2949 + t2956) - 0.2707*(t2508*t2949 + t2960);
  p_output1[26]=t2769*t2923 + t2927*t2967 + t2527*t2971 + t2515*t2975 - 0.0016*(t2513*t2971 + t2978) - 0.2707*(t2508*t2971 + t2982);
  p_output1[27]=-0.0016*t2588 - 0.2707*(-1.*t2508*t2580 + t2938) + t2580*t2988 + t2584*t2991;
  p_output1[28]=t2953*t2991 + t2988*t3000 - 0.2707*(t2960 - 1.*t2508*t3000) - 0.0016*(t2956 - 1.*t2513*t3000);
  p_output1[29]=t2975*t2991 + t2988*t3012 - 0.2707*(t2982 - 1.*t2508*t3012) - 0.0016*(t2978 - 1.*t2513*t3012);
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void J_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
