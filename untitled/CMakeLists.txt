cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled algorithmic_toolbox/test.cpp
        calculator/calculator_II.cpp DSA_ASSIGNMENTS/arrays_practice/array_sorting.cpp DSA_ASSIGNMENTS/arrays_practice/array1.cpp
        DSA_ASSIGNMENTS/arrays_practice/arrays3.cpp DSA_ASSIGNMENTS/arrays_practice/array4.cpp DSA_ASSIGNMENTS/arrays_practice/array3_1.cpp
        DSA_ASSIGNMENTS/arrays_practice/array3_1.cpp DSA_ASSIGNMENTS/arrays_practice/array4_1.cpp DSA_PROBLEM_SOLVING/MATRIX/matrix.cpp
        DSA_ASSIGNMENTS/assignment_1/assignment_1_using_struct.cpp DSA_ASSIGNMENTS/assignment_1/studDB.h DSA_ASSIGNMENTS/assignment_1/studDB_impl.cpp
        DSA_ASSIGNMENTS/assignment_1/main_interface.cpp algorithmic_toolbox/sum1.cpp DSA_ASSIGNMENTS/arrays_practice/ass1.cpp
        DSA_ASSIGNMENTS/arrays_practice/ass1_again.cpp
        algorithmic_toolbox DM/linear_searrch.cpp
        DM/occurances.cpp DSA_ASSIGNMENTS/assignment_3_queue/circular_queue_2.cpp DSA_ASSIGNMENTS/assignment_3_queue/queue_final.cpp
        DM/DM_lists.cpp DSA_PROBLEM_SOLVING/STL/vectors_tut.cpp DSA_PROBLEM_SOLVING/TEMPLATES/templates.cpp
        DSA_PROBLEM_SOLVING/STACK/stack_assignment DSA_PROBLEM_SOLVING/STACK/stack_assignment/linkedlistwithstack.h DSA_PROBLEM_SOLVING/TREES/sorting_algorithms/selectionSort.cpp
        DSA_PROBLEM_SOLVING/TREES/sorting_algorithms/BubbleSort.cpp DSA_PROBLEM_SOLVING/TREES/sorting_algorithms/InsertionSort.cpp
        DSA_PROBLEM_SOLVING/TREES/sorting_algorithms/MergeSort.cpp DSA_PROBLEM_SOLVING/TREES/sorting_algorithms/QuickSort.cpp
        DSA_PROBLEM_SOLVING/QUEUE/queue_again/queue_final.h DSA_PROBLEM_SOLVING/QUEUE/queue_again/queue_impl.cpp DSA_PROBLEM_SOLVING/QUEUE/queue_again/queue_main.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/Single_LL/List.h
        DSA_PROBLEM_SOLVING/LINKED_LIST/Single_LL/List_impl.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/Single_LL/list_main.cpp DSA_PROBLEM_SOLVING/STACK/stack_2/stack_again.cpp
        DSA_PROBLEM_SOLVING/LINKED_LIST/Single_LL/LinkedList_again/LL._again.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/Single_LL/LinkedList_again/LL_Final_code.cpp
        OLD/HackerRank/display_LL.cpp
        OLD/HackerRank/insert_at_tail.cpp OLD/HackerRank/insert_at_head.cpp
        OLD/HackerRank/insert_at_middle.cpp OLD/HackerRank/delete_a_node.cpp
        OLD/HackerRank/get_node_value.cpp OLD/HackerRank/reverse_LL.cpp
        OLD/GFG/LL/count_nodes.cpp OLD/GFG/LL/delete_without_head_pointer.cpp
        OLD/GFG/LL/occurance_in_LL.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/Double_LL/double_LL.cpp
        OLD/GFG/LL/LL_length_even_or_odd.cpp OLD/GFG/LL/Count_Pairs_whose_sum_is_equal_to_X.cpp
        OLD/GFG/LL/Add_two_numbers_represented_by_Linked_List.cpp OLD/GFG/LL/Identical_LL.cpp
        OLD/GFG/LL/delete_alternate_nodes.cpp OLD/GFG/LL/Add_1_to_LL.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/Circular_LL/Circular_LL.cpp
        OLD/GFG/LL/decimal_eq_of_binary_LL.cpp OLD/GFG/LL/subtraction_in_LL.cpp DSA_PROBLEM_SOLVING/QUEUE/queue_code.cpp
        DSA_PROBLEM_SOLVING/QUEUE/circular_queue.cpp OLD/GFG/Queue/queue_using_array.cpp OLD/GFG/LL/find_middle_of_LL.cpp
        OLD/GFG/LL/insert_in_middle.cpp OLD/GFG/LL/node_at_given_index.cpp OLD/GFG/Queue/queue_push_and_pop.cpp
        OLD/GFG/Queue/STL_queue.cpp OLD/GFG/Queue/queue_reversal.cpp OLD/GFG/Arrays/fighting_darkness.cpp
        OLD/GFG/Arrays/check_array_equality.cpp OLD/GFG/Arrays/rotate_array.cpp
        OLD/GFG/Queue/queue_using_LL.cpp OLD/GFG/LL/sum_of_last_n_nodes.cpp
        OLD/GFG/LL/LL_insertion.cpp DSA_PROBLEM_SOLVING/STACK/Stack/stack_code.cpp DSA_PROBLEM_SOLVING/QUEUE/queue_using_LL.cpp
        OLD/GFG/Queue/queue_using_two_stacks.cpp OLD/GFG/LL/Stack.cpp
        OLD/GFG/LL/linked_list_of_strings_forms_a_palindrome.cpp OLD/GFG/LL/compare_two_LL.cpp
        OLD/GFG/LL/sort_LL.cpp DSA_PROBLEM_SOLVING/STACK/Stack/stack_using_LL.cpp DSA_PROBLEM_SOLVING/STACK/Stack/Expression_conversions/infix_to_postfix.cpp
        DSA_PROBLEM_SOLVING/STACK/Stack/Expression_conversions/infix_to_prefix.cpp DSA_PROBLEM_SOLVING/STACK/Stack/Expression_conversions/postfix_to_infix.cpp DSA_PROBLEM_SOLVING/STACK/Stack/Expression_conversions/prefix_to_infix.cpp
        DSA_ASSIGNMENTS/DSAL_mock/DSA_mock_test.cpp ROUGH_FILES/rough2.cpp DSA_ASSIGNMENTS/DSAL_mock/header.h DSA_ASSIGNMENTS/DSAL_mock/impl.cpp DSA_ASSIGNMENTS/DSAL_mock/main.cpp
        OLD/GFG/Stack/stack_designer.cpp OLD/GFG/Stack/stack_using_array.cpp
        OLD/GFG/Stack/pairwise_consecutive_elements.cpp OLD/GFG/Stack/immediate_smaller_element.cpp
        OLD/GFG/Stack/remove_repeated_digits.cpp OLD/GFG/Stack/delete_middle_element_of_stack.cpp
        OLD/GFG/Stack/stack_using_LL.cpp OLD/GFG/Stack/valid_substring.cpp
        OLD/GFG/Stack/special_stack.cpp OLD/GFG/Stack/print_bracket_no.cpp
        OLD/GFG/Stack/sorting_stack.cpp OLD/GFG/Stack/get_min_at_pop.cpp
        OLD/GFG/Stack/impl_two_stacks_in_array.cpp OLD/GFG/Queue/generate_binary_no.cpp
        OLD/GFG/Stack/reverse_a_string.cpp OLD/GFG/Stack/stack_using_two_queues.cpp
        DSA_PROBLEM_SOLVING/TREES/BST/BST_impl.cpp OLD/GFG/searching/Count_zeros_in_a_sorted_matrix.cpp
        DSA_PROBLEM_SOLVING/TEMPLATES/templates2.cpp DSA_PROBLEM_SOLVING/TEMPLATES/function_templates.cpp
        DSA_PROBLEM_SOLVING/TEMPLATES/overloading_templates.cpp DSA_PROBLEM_SOLVING/STL/Lists.cpp DSA_PROBLEM_SOLVING/STL/maps.cpp
        DSA_PROBLEM_SOLVING/STL/function_objects.cpp
        DSA_ASSIGNMENTS/assignment_3_queue/queue.h DSA_ASSIGNMENTS/assignment_3_queue/main.cpp DSA_ASSIGNMENTS/assignment_3_queue/impl.cpp
        DSA_ASSIGNMENTS/assignment_1/studDB.h DSA_ASSIGNMENTS/assignment_1/studDB_impl.cpp DSA_ASSIGNMENTS/assignment_1/main_interface.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/mainFile.cpp DSA_ASSIGNMENTS/assignment_2_stack/stack_impl.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/Stack.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/Assignment4.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/ExpressionHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/ExpressionImplementation.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/StackHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/StackImplementation.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/TreeExpressionHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/TreeExpressionImplementation.cpp
        DSA_ASSIGNMENTS/assignment_5_BST/BST.cpp DSA_ASSIGNMENTS/assignment_5_BST/BST.h DSA_ASSIGNMENTS/assignment_5_BST/BST_Main.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/stack_final.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/exp_tree_final.cpp
        DSA_ASSIGNMENTS/assignment_5_BST/BST_final.cpp
        DSA_ASSIGNMENTS/assignment_7/assignment_7.cpp DSA_ASSIGNMENTS/assignment_8/assignment_8.cpp
        DSA_ASSIGNMENTS/assignment_6_TBT/tbt.h DSA_ASSIGNMENTS/assignment_6_TBT/tbt_impl.cpp DSA_ASSIGNMENTS/assignment_6_TBT/tbt_main.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_header.h
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_main.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_impl.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/HEAP.cpp
        ROUGH_FILES/rough3.cpp DSA_PROBLEM_SOLVING/GRAPHS/MST_kruskal.cpp DSA_PROBLEM_SOLVING/GRAPHS/MST_Prim.cpp
        DSA_ASSIGNMENTS/assignment_10/assignment_10.cpp
        DSA_ASSIGNMENTS/assignment_7/mst_header.h DSA_ASSIGNMENTS/assignment_7/mst_impl.cpp DSA_ASSIGNMENTS/assignment_7/mst_main.cpp
        DSA_ASSIGNMENTS/assignment_8/dijk_header.h DSA_ASSIGNMENTS/assignment_8/dijk_impl.cpp DSA_ASSIGNMENTS/assignment_8/dijk_main.cpp
        DSA_ASSIGNMENTS/assignment_10/header.h DSA_ASSIGNMENTS/assignment_10/impl.cpp DSA_ASSIGNMENTS/assignment_10/main.cpp
        DSA_PROBLEM_SOLVING/STL/hashing.cpp DSA_PROBLEM_SOLVING/STL/sets.cpp
        DSA_ASSIGNMENTS/assignment_6_TBT/TBT_FINAL.cpp ROUGH_FILES/rough4.cpp ROUGH_FILES/rough5.cpp
        algorithmic_toolbox/week3/money_change.cpp
        algorithmic_toolbox/week3/max_loot.cpp
        algorithmic_toolbox/week3/car_fueling.cpp
        DSA_PROBLEM_SOLVING/TEMPLATES/unordered_maps.cpp
        DSA_PROBLEM_SOLVING/GRAPHS/graph.cpp DSA_PROBLEM_SOLVING/GRAPHS/graph2.cpp DSA_PROBLEM_SOLVING/GRAPHS/MST_Prim2.cpp
        DSA_PROBLEM_SOLVING/GRAPHS/Djikstras.cpp DSA_PROBLEM_SOLVING/DEQUEUE/dequeue.cpp DSA_PROBLEM_SOLVING/DEQUEUE/deque2.cpp
        DSA_PROBLEM_SOLVING/DEQUEUE/deque3.cpp DSA_PROBLEM_SOLVING/EXPONENTATION/mod_exp.cpp DSA_PROBLEM_SOLVING/EXPONENTATION/matrix_exp.cpp DSA_PROBLEM_SOLVING/STL/priority_queue.cpp
        ROUGH_FILES/rough1.cpp ROUGH_FILES/main.cpp
        DSA_PROBLEM_SOLVING/RECURSION/fib.cpp DSA_PROBLEM_SOLVING/RECURSION/is_array_sorted.cpp
        DSA_PROBLEM_SOLVING/RECURSION/first_index.cpp DSA_PROBLEM_SOLVING/RECURSION/last_index.cpp
        DSA_PROBLEM_SOLVING/RECURSION/all_indices.cpp DSA_PROBLEM_SOLVING/RECURSION/find_char_arr_length.cpp
        DSA_PROBLEM_SOLVING/SLIDING_WINDOW/FSSW/max_sum_subarray_size_k.cpp
        DSA_PROBLEM_SOLVING/TREES/Trees_CN/tree_node.h DSA_PROBLEM_SOLVING/TREES/Trees_CN/tree_use.cpp DSA_PROBLEM_SOLVING/TREES/Binary_Trees_CN/binary_tree_node.h
        DSA_PROBLEM_SOLVING/TREES/Binary_Trees_CN/binary_tree_use.cpp
        DSA_PROBLEM_SOLVING/TREES/Binary_Trees_CN/binary_tree_main.cpp DSA_PROBLEM_SOLVING/TREES/BST_CN/BST.h
        DSA_PROBLEM_SOLVING/TREES/BST_CN/BST_use.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/LinkedList_CN/LL_node.cpp DSA_PROBLEM_SOLVING/LINKED_LIST/LinkedList_CN/LL_node.h
        DSA_PROBLEM_SOLVING/LINKED_LIST/LinkedList_CN/LL_main.cpp DSA_PROBLEM_SOLVING/TREES/TBT/TBT.h DSA_PROBLEM_SOLVING/HEAP/heap.h
        DSA_PROBLEM_SOLVING/HEAP/heap_use.cpp DSA_PROBLEM_SOLVING/HEAP/heap_main.cpp
        DSA_PROBLEM_SOLVING/GRAPHS/GRAPHS_CN/grpahs_use.cpp DSA_PROBLEM_SOLVING/GRAPHS/GRAPHS_CN/kruskal.cpp DSA_PROBLEM_SOLVING/GRAPHS/GRAPHS_CN/Prim.cpp
        DSA_PROBLEM_SOLVING/GRAPHS/GRAPHS_CN/Dijikstras.cpp DSA_PROBLEM_SOLVING/STACK/EXP_CONVERSIONS_AGAIN/infix_to_postfix.cpp
        DSA_PROBLEM_SOLVING/STACK/EXP_CONVERSIONS_AGAIN/infix_to_prefix.cpp DSA_PROBLEM_SOLVING/SORTING_ALGORITHMS/merge_sort.cpp
        DSA_PROBLEM_SOLVING/SORTING_ALGORITHMS/quick_sort.cpp DSA_PROBLEM_SOLVING/STACK/EXP_TREE/exp_tree_impl.cpp DSA_PROBLEM_SOLVING/STACK/EXP_TREE/exp_tree.h
        DSA_PROBLEM_SOLVING/STACK/EXP_TREE/exp_tree.h DSA_PROBLEM_SOLVING/FILE_HANDLING/file_handling.cpp
        DSA_PROBLEM_SOLVING/FILE_HANDLING/file_handling_2.cpp DSA_PROBLEM_SOLVING/FILE_HANDLING/file_handling_FINAL.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/fib.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/min_steps.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/min_count.cpp
        DAA_ASSIGNMENTS/file_handling.cpp DAA_ASSIGNMENTS/merge_sort.cpp DAA_ASSIGNMENTS/n_queens.cpp DAA_ASSIGNMENTS/fractional_knapsack_using_greedy.cpp
        DSA_PROBLEM_SOLVING/BACKTRACKING/n_queens.cpp DSA_PROBLEM_SOLVING/BACKTRACKING/rat_in_a_maze.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/aggressive_cows.cpp DAA_ASSIGNMENTS/knapsack_01.cpp
        DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/knapsack_01.cpp DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/subset_sum.cpp DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/equal_sum_partition.cpp
        DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/count_subsets_sum_with_given_sum.cpp DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/min_sum_partition.cpp
        DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/count_no_of_subsets_with_given_difference.cpp DSA_PROBLEM_SOLVING/DP/knapsack_01_variations/target_sum.cpp
        DSA_PROBLEM_SOLVING/DP/unbounded_knapsack/unbounded_knapsack_using_DP.cpp DSA_PROBLEM_SOLVING/DP/unbounded_knapsack/rod_cutting.cpp
        DSA_PROBLEM_SOLVING/DP/unbounded_knapsack/coin_change_one.cpp DSA_PROBLEM_SOLVING/DP/unbounded_knapsack/coin_change_two.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LCS/lcs.cpp DSA_PROBLEM_SOLVING/DP/DP_LCS/longest_common_substring.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LCS/scs.cpp DSA_PROBLEM_SOLVING/DP/DP_LCS/min_no_of_insertions_deletions_to_convert_a_to_b.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LPS/lps.cpp DSA_PROBLEM_SOLVING/DP/DP_LPS/min_deletions_to_make_palindrome.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LCS/lrs.cpp DSA_PROBLEM_SOLVING/DP/DP_LCS/sequence_pattern_matching.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LPS/min_insertions_to_form_palindrome.cpp DSA_PROBLEM_SOLVING/DP/DP_MCM/mcm.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LCS/edit_distance.cpp DSA_PROBLEM_SOLVING/DP/DP_MCM/palindromic_partitioning.cpp
        DSA_PROBLEM_SOLVING/DP/DP_MCM/boolean_parenthesization.cpp DSA_PROBLEM_SOLVING/DP/DP_MCM/egg_dropping.cpp
        DSA_PROBLEM_SOLVING/DP/DP_MCM/scrambled_string.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/get_min_squares.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/min_cost_path.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/max_cost_path.cpp DSA_PROBLEM_SOLVING/SLIDING_WINDOW/FSSW/first_-ve_no_in_every_window_size_k.cpp
        DSA_PROBLEM_SOLVING/SLIDING_WINDOW/FSSW/count_occurrance_of_anagrams.cpp DSA_PROBLEM_SOLVING/SLIDING_WINDOW/FSSW/max_of_all_subarrays_of_size_k.cpp
        DSA_PROBLEM_SOLVING/SLIDING_WINDOW/VSSW/largest_subarray_of_sum_K.cpp DSA_PROBLEM_SOLVING/SLIDING_WINDOW/VSSW/subarray_with_given_sum.cpp
        DSA_PROBLEM_SOLVING/SLIDING_WINDOW/VSSW/longest_substring_with_K_unique_characters.cpp
        DSA_PROBLEM_SOLVING/SLIDING_WINDOW/VSSW/longest_substring_without_repeating_characters.cpp
        DSA_PROBLEM_SOLVING/SLIDING_WINDOW/VSSW/pick_toys.cpp DSA_PROBLEM_SOLVING/SLIDING_WINDOW/VSSW/min_window_substring.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/lis.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/loot_houses.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/max_square_matrix_with_all_zeroes.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/sus.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/lus.cpp DSA_PROBLEM_SOLVING/STACK/ngr.cpp
        DSA_PROBLEM_SOLVING/STACK/ngl.cpp DSA_PROBLEM_SOLVING/STACK/nsl.cpp
        DSA_PROBLEM_SOLVING/STACK/nsr.cpp DSA_PROBLEM_SOLVING/STACK/stock_span.cpp
        DSA_PROBLEM_SOLVING/STACK/mah.cpp DSA_PROBLEM_SOLVING/STACK/mar.cpp DSA_PROBLEM_SOLVING/STACK/rwt.cpp
        DSA_PROBLEM_SOLVING/STACK/celebrity.cpp DSA_PROBLEM_SOLVING/DP/DP_LCS/lcs_of_3_strings.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/print_all_ss_of_a_string.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/string_ss.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/count_all_possible_paths.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/gold_mine.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/count_ways_to_reach_nth_stair.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/min_steps_to_dest.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/distinct_occurrences.cpp
        DSA_PROBLEM_SOLVING/DP/DP_CN/min_no_of_jumps.cpp DSA_PROBLEM_SOLVING/DP/DP_CN/count_no_of_substrings.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/interleaved_strings.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/msis.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/box_stacking.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/las.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/max_chain_length.cpp
        DSA_PROBLEM_SOLVING/DP/DP_LPS/longest_palindrome_in_a_string.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/bell_numbers.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/friends_pairing.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/no_of_distinct_ss.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/wildcard_pattern_matching.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/word_break.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/max_product_subarray.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/longest_subsequence_-1.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/bs.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/bs_on_reverse_sorted_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/first_and_last_occurrence.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/count_of_an_element_in_sorted_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/no_of_times_a_sorted_array_is_rotated.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/find_an_element_in_rotated_sorted_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/min_element_in_rotated_sorted_array.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/searching_in_nearly_sorted_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/floor_in_a_sorted_array.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/cell_in_a_sorted_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/next_alphabetical_element.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/min_diff_element_in_sorted_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/peak_element.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/find_max_element_in_bitonic_array.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/search_in_sorted_matrix.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/allocate_min_no_of_pages.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/smallest_factorial_no.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/median_in_row_wise_sorted_matrix.cpp
        DSA_PROBLEM_SOLVING/BINARY_SEARCH/find_nth_root.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/max_sum_bitonic_subsequence.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/max_bitonic_subarray_sum.cpp
        DSA_PROBLEM_SOLVING/DP/TECH_DOSE/lbs.cpp DSA_PROBLEM_SOLVING/BINARY_SEARCH/capacity_to_ship_packages_within_d_days.cpp
        DSA_PROBLEM_SOLVING/RECURSION/sort_array.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/lcis.cpp DSA_PROBLEM_SOLVING/RECURSION/sort_stack.cpp
        DSA_PROBLEM_SOLVING/RECURSION/delete_middle_element_of_stack.cpp DSA_PROBLEM_SOLVING/RECURSION/reverse_stack.cpp
        DSA_PROBLEM_SOLVING/RECURSION/kth_symbol_in_grammar.cpp DSA_PROBLEM_SOLVING/RECURSION/power_set.cpp DSA_PROBLEM_SOLVING/RECURSION/unique_subsets.cpp
        DSA_PROBLEM_SOLVING/RECURSION/permutation_with_spaces.cpp DSA_PROBLEM_SOLVING/RECURSION/permutation_with_case_change.cpp
        DSA_PROBLEM_SOLVING/RECURSION/letter_case_permutation.cpp DSA_PROBLEM_SOLVING/RECURSION/generate_all_balanced_paranthesis.cpp
        DSA_PROBLEM_SOLVING/RECURSION/binary_nos_having_more_equal_1s_than_0s_for_all_prefixes.cpp
        DSA_PROBLEM_SOLVING/RECURSION/josephus_problem.cpp DSA_PROBLEM_SOLVING/RECURSION/string_permutations.cpp
        DSA_PROBLEM_SOLVING/RECURSION/pascal_triangle.cpp DSA_PROBLEM_SOLVING/DP/TECH_DOSE/pascal_triangle.cpp
        DSA_PROBLEM_SOLVING/RECURSION/lucky_numbers.cpp DSA_PROBLEM_SOLVING/RECURSION/all_unique_permutations_of_array.cpp
        DSA_PROBLEM_SOLVING/RECURSION/handshakes.cpp)


