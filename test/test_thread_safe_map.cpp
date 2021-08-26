#include <iostream>
#include <unordered_map>
#include <string>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <vector>
#include <initializer_list>

template  <class Key, class T>
class ThreadSafeUnorderedMap {
    ThreadSafeUnorderedMap() {}
    using iterator = typename std::unordered_map<Key, T>::iterator;
    using const_iterator = const iterator;
    using unordered_map = std::unordered_map<Key, T>;
    using value_type = typename std::unordered_map<Key, T>::value_type;
    using size_type = std::size_t;
    std::pair<iterator, bool> emplace(const Key& key, const T& value) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.emplace(key, value);
    }
    
    ThreadSafeUnorderedMap<Key, T>& operator=(
        const ThreadSafeUnorderedMap<Key, T>& other) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        t_map_ = other.t_map_;
        return *this;
    }
    
    ThreadSafeUnorderedMap<Key, T>& operator=(
        ThreadSafeUnorderedMap<Key, T>& other) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        t_map_ = other.t_map_;
        return *this;
    }
        
    ThreadSafeUnorderedMap<Key, T>& operator=(
        std::initializer_list<value_type> ilist) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        t_map_ = unordered_map(ilist);
        return *this;
    } 
    
    //get allocator 暂时不实现

    iterator begin() noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.begin();
    }

    const_iterator begin() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.begin();
    }
    
    const_iterator cbegin() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.cbegin();
    }

    iterator end() noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.end();
    }

    const_iterator end() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.end();
    }

    const_iterator cend() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.cend();
    }

    bool empty() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.empty();
    }

    size_type size() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.size();
    }

    size_type max_size() const noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.max_size();
    }
    
    void clear() noexcept {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        t_map_.clear();
    }

    auto insert(const value_type& value) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(value);
    }

    template <class P>
    std::pair<iterator,bool> insert(P&& value) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(value);
    }

    iterator insert(const_iterator hint, const value_type& value) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(hint, value);
    }

    iterator insert(const_iterator hint, value_type&& value) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(hint, std::forward(value));
    }

    template<class P>
    iterator insert(const_iterator hint, P&& value) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(hint, std::forward(value));
    }

    template< class InputIt>
    void insert(InputIt first, InputIt last) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(first, last);
    }

    void insert(std::initializer_list<value_type> ilist) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.insert(ilist);
    }

    template <class... Args>
    iterator emplace_hint(const_iterator hint, Args&&... args) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.emplace_hint(hint, std::forward(args...));
    }

    template <class... Args>
    std::pair<iterator, bool> try_emplace(const Key& k, Args&&... args) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.try_emplace(k, std::forward(args...));
    }
    template <class... Args>
    std::pair<iterator, bool> try_emplace(Key&& k, Args&&... args) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.try_emplace(std::forward(k), std::forward(args...));
    }

    template <class... Args>
    iterator try_emplace(const_iterator hint, const Key& k, Args&&... args) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.try_emplace(hint, k, std::forward(args...));
    }

    template <class... Args>
    iterator try_emplace(const_iterator hint, Key&& k, Args&&... args) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.try_emplace(hint, std::forward(k), std::forward(args...));
    }

    iterator erase(const_iterator pos) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.erase(pos);
    }

    iterator erase(const_iterator first, const_iterator last) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.erase(first, last);
    }

    size_type erase(const Key& key) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.erase(key);
    }

    void swap(unordered_map& other) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.swap(other);
    }
    
    template<class C>
    auto rbegin(C& c) -> decltype(c.rbegin()) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.rbegin(c);
    }    

    template<class C>
    auto rbegin(const C& c) -> decltype(c.rbegin()) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.rbegin(c);
    }
    
    template<class C>
    std::reverse_iterator<const C*> rbegin(std::initializer_list<T> il) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.rbegin(il);
    }
    
    template<class C>
    auto crbegin( const C& c ) -> decltype(std::rbegin(c)) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.crbegin(c);
    }

    template<class C>
    auto rend(C& c) -> decltype(c.rend()) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.rend(c);
    }

    template<class C>
    std::reverse_iterator<const C*> rend( std::initializer_list<T> il) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.rend(il);
    }

    T& at(const Key& key) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.at(key);
    }

    const T& at(const Key& key) const {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.at(key);
    }
    
    T& operator[](const Key& key) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_[key];
    }
    T& operator[](Key&& key) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_[key];
    }

    size_type count(const Key& key) const {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.count(key);
    }

    iterator find(const Key& key) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.find(key);
    }

    const_iterator find(const Key& key) const {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.find(key);
    }

    std::pair<iterator,iterator> equal_range(const Key& key) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.equal_range(key);
    }

    std::pair<const_iterator,const_iterator> equal_range(const Key& key) const {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.equal_range(key);
    }

    void reserve(size_type count) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.reserve(count);
    }

    void rehash( size_type count) {
        std::unique_lock<std::shared_mutex> lk(mtx_);
        return t_map_.rehash(count);
    }

private: 
   std::unordered_map<Key, std::shared_ptr<T>> t_map_;
   std::shared_mutex mtx_;
};